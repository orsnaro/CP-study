//problem: https://leetcode.com/problems/count-the-number-of-special-characters-i/submissions/2013888554/?envType=daily-question&envId=2026-05-26
public class Solution {
    public int NumberOfSpecialChars(string word) {
        Dictionary<char, char> dict = new Dictionary<char, char>();
        int res = 0;

        for(int i = 0; i < word.Length; i++){
            char c = Char.ToLower(word[i]);
            if(dict.ContainsKey(c)){
                if(  dict[c] != '#' && dict[c] - word[i] != 0 ){
                    res += 1;
                    dict[c] = '#';
                }
            } else {
                dict[c] = word[i];
            }
        }

        return res;
    }
}