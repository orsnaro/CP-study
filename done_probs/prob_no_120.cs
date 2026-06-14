//problem: https://leetcode.com/problems/find-the-highest-altitude/?envType=study-plan-v2&envId=leetcode-75

public class Solution {
    public int LargestAltitude(int[] gain) {
        int sum = 0;
        int res = 0;
        foreach(var g in gain){
            sum += g;
            res = Math.Max(res, sum);
        }

        return res;
    }
}