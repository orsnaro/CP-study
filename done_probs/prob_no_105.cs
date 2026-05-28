//problem: https://leetcode.com/problems/string-compression/?envType=study-plan-v2&envId=leetcode-75
public class Solution {
    public int Compress(char[] chars) {
        // thoughts:
        // will take care of this line of interview later: `You must write an algorithm that uses only constant extra space.` e.g.(dont create dynamic sized struct/array that changes with input size or any thing else)
        // will write one that returns right new length only first: then will take care of any extra needings if its a real interview (like: answer probably using freq array with fixed size of 2001 or ascii characters table size)

        // consecutive repeating character new size is: (1 for char + length_digits_size)
        //how to get length_digits_size of a n digits number? first ideas is to div /10 loop or Int32.ToString().Length() 

        int res = 0;
        int cntC = 0;
        int startIdx = 0;
        int sz = chars.Length;

        if(sz <= 1) return 1;

        for(int i = 1; i < sz; i++){
            if(chars[i-1] == chars[i]){
                cntC += 1;
            } else {
                res += (cntC == 0 ? 1 : (cntC + 1).ToString().Length + 1);
                (chars, startIdx) = updateArr(startIdx, cntC, chars, i);
                cntC = 0;
            }
        }

        res += (cntC == 0 ? 1 : (cntC + 1).ToString().Length + 1);
        (chars, startIdx) = updateArr(startIdx, cntC, chars, sz);
        
        return res;
    }

    public (char[], int) updateArr(int startIdx, int cntC, char[] chars, int i){
        chars[startIdx] = chars[i-1];
        
        if(cntC > 0){
            string tmp = (cntC + 1).ToString();
            for(int j = 0; j < tmp.Length; j++){
                chars[startIdx + 1 + j] = tmp[j];
            }
            startIdx += tmp.Length + 1;
        } else {
            startIdx += 1;
        }

        return (chars, startIdx);
    }
}