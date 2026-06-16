//problem: https://leetcode.com/problems/find-pivot-index/?envType=study-plan-v2&envId=leetcode-75

public class Solution {
    public int PivotIndex(int[] nums) {
        //[0,1,8,11,17,22,28] lsum = sum[idx]  rsum = sum[sz -1] - sum[idx+1] 
        //or -> use (lSum[]  and rSum[]) 
        //or -> one loop get int totSum then another loop to minus on element from right per iteration if you found (taken value so far == rest of current value) then return the idx if loop ends and that didnt happen return -1 (this is most efficient sol)
        

        int sz = nums.Length;
        if(sz == 1) return 0;

        int[] sum = new int[sz+1];
        int res = sz + 1; // choose start value that is invalid index and higher than all indices 
        
        sum[0] = 0;
        for(int i = 1; i <= sz; i++){
            sum[i] = sum[i-1] + nums[i-1];
        }


        for(int i = 0; i < sz - 1; i++){
            int lsum = sum[i];
            int rsum = sum[sz] - sum[i+1];
            if(lsum == rsum){
                return i; //i always increase so anser always gets worse. we need the best!
                // break;
            }
        }
        
        //pivot index check on last number (rightmost)
        int lsum2 = sum[sz-1]; 
        int rsum2 = 0;
        return lsum2 == rsum2 ? sz-1 :-1;
    }
}