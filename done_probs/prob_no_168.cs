// https://leetcode.com/problems/removing-stars-from-a-string/?envType=study-plan-v2&envId=leetcode-75

public class Solution {
    public string RemoveStars(string s) {
        //create empty stack
        //counter to keep track of how many stars arent processed yet
        //fill the stack with the string 

        string res = "";
        int pending_star_cnt = 0;

        var str_stk = new Stack<char>();

        foreach(var c in s)
            str_stk.Push(c);

        while(str_stk.Count != 0){
            char tmp = str_stk.Pop();
            if(tmp == '*'){
                pending_star_cnt++;
            } else {
                if(pending_star_cnt == 0){
                    res += tmp;
                } else {
                    pending_star_cnt--;
                    //discarding the character also
                }
            }
        }
        
        char[] charRes = res.ToCharArray();
        Array.Reverse(charRes);


        return new string(charRes);
    }
}