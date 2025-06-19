//prob: https://leetcode.com/problems/longest-consecutive-sequence/description/?envType=problem-list-v2&envId=oizxjoit


public class Solution {
   public int LongestConsecutive(int[] nums) {
      int mx = 0;
      nums = nums.Distinct<int>().ToArray<int>();
      Array.Sort(nums);
      var len = nums.Length;
      var cnt =1;

      int i = 1;
      while ( i < len && len > 1){
         int diff = nums[i] - nums[i-1];

         if(diff != 1){
            mx = Math.Max(mx,cnt);
            cnt = 1;
            i++;
            continue;  
         }
         i++;
         cnt++;
            
      }


      mx = Math.Max(mx,cnt);
      return len == 0 ? 0 : mx;
   }
}