//problem: https://leetcode.com/problems/reverse-words-in-a-string/?envType=study-plan-v2&envId=leetcode-75

public class Solution {
    public string ReverseWords(string s) {

        string res = String.Empty;
        int idx = -1;
        bool isFirstWord = true;

        //special case
        if(s.Length == 1) return s;
        
        for(int i = s.Length - 1; i >= 0; i--){
            if(s[i] != ' ' && idx == -1){
                idx = i; // we found word-end -> continue until you arrive to where it starts then append to the res
            } else if (s[i] == ' ' && idx != -1) {//reached where word start or whole s starts with non-whitechar
                //current (i+1) is word start, current idx is word end
                res += isFirstWord ? "" : " ";
                isFirstWord = false;
                res += s[(i + 1)..(idx+1)]; //safe range : range end is excluded
                idx = -1;
            } 

            if (i == 0 && s[i] != ' '){//handle special case: if this word starts at s[0] 
                res += isFirstWord ? "" : " ";
                res += s[i..(idx+1)]; 
            }
        }

        return res;
    }
}