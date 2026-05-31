//problem: https://leetcode.com/problems/is-subsequence/?envType=study-plan-v2&envId=leetcode-75

public class Solution {
    public bool IsSubsequence(string s, string t) {

        //special cases to make later code simpler
        if(s == t) return true;
        if(s.Length > t.Length) return false;
        if(s.Length == 0) return true;
        //

        int sPtr = 0;
        for(int i = 0; i < t.Length; i++){
            if(s[sPtr] == t[i])
                sPtr++;

            if(sPtr >= s.Length) return true; //found them all
        }

        return false;
    }
}