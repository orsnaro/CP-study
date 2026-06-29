//problem: https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/submissions/2049990682/?envType=daily-question&envId=2026-06-29

public class Solution {
    public int NumOfStrings(string[] patterns, string word) {
        int res = 0;
        
        foreach(string s in patterns)
            res += word.Contains(s) ? 1 : 0;

        return res;
    }
}