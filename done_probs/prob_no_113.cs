//problem: https://leetcode.com/problems/container-with-most-water/?envType=study-plan-v2&envId=leetcode-75

public class Solution {
    public int MaxArea(int[] height) {
        int p1 = 0;
        int p2 = height.Length - 1;
        int res = 0;

        while (p2 > p1){
            var tmp = Math.Min(height[p1], height[p2]) * (p2 - p1);
            res = Math.Max(res, tmp);

            if(height[p2] < height[p1]){
                p2--;
            } else if(height[p1] <= height[p2]){
                p1++;
            }
           
        }

        return res;
        
    }
}