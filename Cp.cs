
//https://leetcode.com/problems/asteroid-collision/submissions/2192702451/?envType=study-plan-v2&envId=leetcode-75
public class Solution {
    public int[] AsteroidCollision(int[] asteroids) {

        Stack<int> res = new Stack<int>();
        res.Push(asteroids[0]);
        int sz = asteroids.Length;
        int i = 1;

        while(i < sz && res.Count > 0){
            int crnt = asteroids[i];
            int peek = res.Peek(); 
            if(IsRight(peek) && !IsRight(crnt)){


                if(peek == Math.Abs(crnt)){
                    res.Pop();
                    if(res.Count == 0 && i + 1 < sz){
                        res.Push(asteroids[++i]);
                    } 
                    i++;
                }

                if(peek < Math.Abs(crnt)){
                    res.Pop();
                    if(res.Count == 0){
                        res.Push(asteroids[i]);
                        i++;
                    } 
                }

                if(peek > Math.Abs(crnt)){i++;}

            } else {//stable: can add this asteroid
                res.Push(crnt);
                i++;                
            }
        }

       var resA = res.ToArray();
        Array.Reverse(resA);
        return resA; //those 3 lines are faster than res.Reverse().ToArray()
    }

    bool IsRight(int ast){
        return ast > 0 ? true : false; //gauranteed not to be zero
    }
}