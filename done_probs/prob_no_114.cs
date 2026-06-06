//problem: https://leetcode.com/problems/exactly-one-consecutive-set-bits-pair/

public class Solution {
    public bool ConsecutiveSetBits(int n) {
        int res = 0;
        int cnt = 0;
        
        while(n != 0){
            short bit = (short)(n & 1);
            if(bit == (short)1){
                cnt++;
            } else{
                if(cnt >= 2){
                    res+= (cnt-1);
                }
                cnt = 0;
            }
            
            if(res > 1) return false;
            
            n = (n >> 1);
        }
        
        if(cnt >= 2){
            res+= (cnt-1);
        }

        return res == 1 ? true : false;
    }
}