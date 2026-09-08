// https://leetcode.com/problems/count-commas-in-range/?envType=daily-question&envId=2026-09-08
public class Solution {
    public int CountCommas(int n) {
        return n < 1000 ? 0 : n-999; 
    }
}