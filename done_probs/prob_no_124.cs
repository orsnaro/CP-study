//problem: https://leetcode.com/problems/maximum-number-of-balloons/?envType=daily-question&envId=2026-06-22


public class Solution {
    public int MaxNumberOfBalloons(string text) {
        int[] cFreq =  new int[140];// [(int)'b', (int)'a', (int)'l', (int)'o', (int)'n')];

        int sz = text.Length;
        foreach(char c in text)
            cFreq[(int)c]++;
        
        int res =               cFreq[(int)'b'];
        res     = Math.Min(res, cFreq[(int)'a']);
        res     = Math.Min(res, cFreq[(int)'l'] / 2);
        res     = Math.Min(res, cFreq[(int)'o'] / 2);
        res     = Math.Min(res, cFreq[(int)'n']);

        return res;
    }
}