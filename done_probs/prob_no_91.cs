//problem: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/?envType=study-plan-v2&envId=leetcode-75
public class Solution {
    public IList<bool> KidsWithCandies(int[] candies, int extraCandies) {
        //sol1: use brute force: stroe the max,  give each one all extraCandies and check if greater or equal to max kid, update result list, continue to next kid until end of kids
        int max = -1;
        List<bool> res = new List<bool>();

        foreach (var kidC in candies)
            max = kidC >= max ? kidC : max;
        
        foreach (var kidC in candies)
            res.Add(kidC+extraCandies >= max ? true : false);
        
        return res;
    }
}