//problem: https://leetcode.com/problems/unique-number-of-occurrences/?envType=study-plan-v2&envId=leetcode-75

public class Solution {//les practice LINQ
    public bool UniqueOccurrences(int[] arr) {
        var filter = arr.GroupBy(x => x).Select(g => g.Count()).ToList();

        var res = filter.Count == filter.Distinct().Count();
        return res;
    }
}