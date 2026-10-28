//https://leetcode.com/problems/contains-duplicate/


public class Solution {
    public bool ContainsDuplicate(int[] nums) {
        // //Normal solution 
        // int sz1 = nums.Length;
        // int sz2 = nums.ToHashSet<int>().Count;
        // return sz1==sz2 ? false : true;

        //LINQ
        return nums.Distinct().Count() != nums.Length ? false : true; 
    }
}