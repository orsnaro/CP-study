//problem: https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/description/?envType=study-plan-v2&envId=leetcode-75

public class Solution {
    public int LongestSubarray(int[] nums) {
        int res = 0;
        int k = 1;
        int sz = nums.Length;
        Queue<int> zIdx = new Queue<int>();
        
        int strt = 0;
        int j = 0;
        while(strt <= j && j < sz){
            if(nums[j] == 0){
                zIdx.Enqueue(j);
                if(k > 0){
                    k--;
                }else{
                    strt = zIdx.Dequeue() + 1;
                }
            } 
            res = Math.Max(res, j-strt);
            j++;
        }

        return res;
    }
}