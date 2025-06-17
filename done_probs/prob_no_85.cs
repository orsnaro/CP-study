//porblem: https://leetcode.com/problems/longest-substring-without-repeating-characters/?envType=problem-list-v2&envId=oizxjoit


using System.Runtime.CompilerServices;
using System.Security.Cryptography;

public class Solution
{
   public int LengthOfLongestSubstring(string s)
   {
      int mx = 0;
      int len = s.Length;
      HashSet<char> set = new HashSet<char>();

      int lastCnt = set.Count;
      int strt = 0;
      for (int i = 0; i < len; i++)
      {
         set.Add(s[i]);
         if (set.Count == lastCnt)
         {
            mx = Math.Max(mx, lastCnt);
            set.Clear();
            if (mx >= len - (strt + 1)) //this if clause is for early stop you can comment it and it will get ac also!
            {
               break;
            }
            i = strt;
            strt++;
         }
         lastCnt = set.Count;
      }

      mx = Math.Max(mx, lastCnt);
      return mx;
   }
}