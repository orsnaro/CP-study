//problem: https://leetcode.com/problems/find-the-difference-of-two-arrays/?envType=study-plan-v2&envId=leetcode-75

public class Solution {
    public IList<IList<int>> FindDifference(int[] nums1, int[] nums2) {
        IList<IList<int>> res = new List<IList<int>>();

        res.Add(nums1.Except(nums2).ToList());
        res.Add(nums2.Except(nums1).ToList());
        //sol can be using HashSet<int>  also or bool freq arr1,arr2
        
        return res;
    }
}