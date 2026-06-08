//problem: https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/?envType=study-plan-v2&envId=leetcode-75


public class Solution {
    public int MaxVowels(string s, int k) {
        int res = 0;
        int w = 0;
        char[] vowels = ['u', 'a', 'e', 'i', 'o'];
        for(int i = 0; i < k; i++){
            if(vowels.Contains(s[i])){
                w++;
            }
        }
        res = w;
        

        for(int i = k; i < s.Length; i++){
            if(vowels.Contains(s[i])){
                w++;
            }
            if(vowels.Contains(s[i-k])){
                w--;
            }
            res = Math.Max(res, w);
        }


        return res;
    }
}