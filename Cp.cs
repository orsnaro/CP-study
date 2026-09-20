//https://leetcode.com/problems/reverse-degree-of-a-string/?envType=daily-question&envId=2026-09-20

public class Solution {
    public int ReverseDegree(string s) {
        int mx_char = 123;
        int sz = s.Length;

        int res = 0;
        for(int i = 0; i < sz; i++)
            res += ((mx_char - Convert.ToInt32(s[i])) * (i+1));

        return res;
    }
}