//https://leetcode.com/problems/number-of-employees-who-met-the-target/
public class Solution {
    public int NumberOfEmployeesWhoMetTarget(int[] hours, int target) {
        //pratice LINQ
        return hours.Count(x => x >= target);

        //or
        // return hours.Where(x => x >= target).Count(); 

        //or (select here returns list of booleans! so we want count need only the true not all)
        // return hours.Select(x => x >= target).Count(x => x == true);
    }
}