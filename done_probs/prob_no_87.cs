//problem: https://leetcode.com/problems/merge-strings-alternately/?envType=study-plan-v2&envId=leetcode-75

using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Numerics;

class Cp
{
    static public string MergeAlternately(string word1, string word2) {
        string bigW = (word1.Length >= word2.Length ? word1 : word2);
        string smallW = (bigW == word1 ? word2 : word1);

        int w1Len = word1.Length;
        int w2Len = word2.Length;
        int minLen = Math.Min(w1Len, w2Len);
        int maxLen = Math.Max(w1Len, w2Len);

        string res = default;


        for (int i = 0, a =0, b=0; i < maxLen; i++) {
            if(i >= minLen) {
                res += bigW[minLen..maxLen];
                break;
            }
            res += word1[i];   
            res += word2[i];
        }

        return res;
    }
    static void Main() {

        Console.WriteLine(MergeAlternately("pqrs", "ab")); 
        

    }
}