//problem: https://leetcode.com/problems/maximum-average-subarray-i/?envType=study-plan-v2&envId=leetcode-75

public class Solution {
    public double FindMaxAverage(int[] nums, int k) {
        double res = 0.0;
        double wsum = 0.0;
        for(int i = 0; i < k; i++)
            wsum += nums[i];
        res = wsum;
        

        for(int i = k; i < nums.Length; i++){
            wsum = wsum - nums[i - k] + nums[i];

            res = Math.Max(res, wsum);
        }

        return res / k;
    }
}