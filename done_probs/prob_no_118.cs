//problem: https://leetcode.com/problems/max-consecutive-ones-iii/?envType=study-plan-v2&envId=leetcode-75
public class Solution {
    public int LongestOnes(int[] nums, int k) {
      
        int res = 0;

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
            res = Math.Max(res, j-strt+1);
            j++;

        }

        return res;
    }
}