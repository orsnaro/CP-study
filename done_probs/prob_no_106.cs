//problem: https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/?envType=daily-question&envId=2026-05-29

public class Solution {
    public int MinElement(int[] nums) {
        //thanks csharp for ToString() function!

        int min = int.MaxValue;

        for(int i = 0; i < nums.Length; i++){
            var num = nums[i].ToString();
            var dsum = 0;
            foreach(var d in num)
                dsum += (d - '0'); //convert to int by getting using the ascii value
            
            min = Math.Min(min, dsum);
        }

        return min;
    }
}