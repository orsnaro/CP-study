//problem: https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/?envType=daily-question&envId=2026-07-07

public class Solution {
    public long SumAndMultiply(int n) {
        //sol2: or convert to string, ... you know the drill
        int sum = 0;
        int x = 0;
        Stack<int> s = new Stack<int>(); //or normal array[33] 
        while(n > 0){
            int tmp = n % 10;
            n /= 10;

            if(tmp != 0){
                sum += tmp;
                s.Push(tmp);
            }
        }
        while(s.Count > 0){
            x = (x == 0 ? s.Pop() : (x*10 + s.Pop()) );
        }

        return (long)x * sum;
    }
}