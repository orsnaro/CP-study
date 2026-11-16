//https://leetcode.com/problems/decode-string/?envType=study-plan-v2&envId=leetcode-75

public class Solution {
    public string DecodeString(string s) {
        var stk = new Stack<(int idx, int cnt, int dLen)>();
        StringBuilder res = new StringBuilder(s); //mutable -> faster to update/modify than string class
        int sz = res.Length;

        int dSt = -1;

        for(int i = 0; i < sz; i++){
            //open bracket (put it idx,cnt)
            //on close bracket dont push it and pop only one tuble from stack
            //update res string accordingly

            if(char.IsDigit(res[i])){
                dSt = dSt == -1 ? i : dSt;
            }   

            if(res[i] == '['){
                //join all digits then convert to int and save digs length
                int cnt = Convert.ToInt32(res.ToString(dSt, i-dSt));
                stk.Push((i, cnt, i-dSt));


                dSt = -1;
            } 

            if(res[i] == ']'){
                var tpl = stk.Pop();

                //get the string that will be repeated 
                var  substr = String.Concat(Enumerable.Repeat(res.ToString(tpl.idx + 1, i - tpl.idx - 1), tpl.cnt)) ;
                Console.WriteLine(substr);

                //replace the encoded substr with its actual substr after decoding (in-place)
                res.Replace(res.ToString(tpl.idx - tpl.dLen, i - (tpl.idx - tpl.dLen) + 1), substr);

                //update our loop pointer and string length (cuz the string we are looping on is being decoded substr by substr dynamically not one time at end)
                var diff = sz - res.Length;
                i -= diff;
                sz = res.Length;
            }
        }
        
        return res.ToString();
    }
}