//problem: https://leetcode.com/problems/reverse-vowels-of-a-string/description/?envType=study-plan-v2&envId=leetcode-75

public class Solution {
    public string ReverseVowels(string s) {
        if (s.Length <= 1) return s;

        char[] vowels = ['u', 'a', 'e', 'i', 'o', 'U', 'A', 'E', 'I', 'O'];
        List<(int idx, char c)> vL = new List<(int idx, char c)>();

        char[] res = s.ToCharArray();

        
        for(int i = 0; i < s.Length; i++){//store all vowels

            bool isV = vowels.Contains(s[i]);
            if(isV){
                (int idx , char c) tmp = (i, s[i]);
                vL.Add(tmp);
            }
        }

        var vsz = vL.Count();
        for(int i = 0, j = vsz - 1; i < vsz/2 ; i++, j--){//reverse all vowles
            res[vL[i].idx]= vL[j].c;
            res[vL[j].idx] = vL[i].c;
        }
        
        return new String(res);
    }
}                