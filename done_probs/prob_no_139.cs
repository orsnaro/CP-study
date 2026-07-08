//problem: https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-ii/submissions/2060976922/?envType=daily-question&envId=2026-07-08 

public class Solution {
    public int[] SumAndMultiply(string s, int[][] queries) {
        int[] res = new int[100003];

        int M = 1_000_000_007; //10e8 + 7 === 10^9 + 7

        int sz = s.Length;

        int[] psum = new int[sz+3];
        string[] digcon = new string[sz+3];
        digcon[0] = "";
        digcon[sz] = "";

        psum[1] = s[0] - '0';
        for(int i = 1; i < sz; i++){
            psum[i+1] = (s[i] - '0') + psum[i];

            if(s[i-1] != '0'){
                digcon[i] = digcon[i-1] + s[i-1];
            } else {
                digcon[i] = digcon[i-1];
            }
        } 
        if(s[sz - 1] != '0'){
            digcon[sz] = digcon[sz - 1] + s[sz - 1];
        } else {
            digcon[sz] = digcon[sz-1];
        }

        long sum = 0;
        int cnt = 0; 
        foreach(int[] q in queries){
            sum = (int)( psum[q[1]+1] - psum[q[0]] );

            string sx = (q[1]==q[0] ? (s[q[0]] == '0' ? "0" : s[q[0]]+"") : digcon[q[1]+1]);
            int digdiff = digcon[q[1]+1].Length - digcon[q[0]].Length;
            long x = 0L;
            if(sx.Length < 2){
                if(sx != ""){
                    foreach(var cd in sx){
                        var d = cd - '0';
                        x = ( x == 0L ? d : ((x * 10 + d) % M) );
                    }
                }             
            } else {
                if(sx != ""){
                    var tmp = sx[^digdiff..];
                    foreach(var cd in tmp){
                        int d = cd - '0';
                        x = ( x == 0L ? d : ((x * 10 + d) % M) );
                    }
                }     
            }

            
            res[cnt] = (int)((x%M) * (sum%M) % M);
            cnt++;
        }
        return res[0..cnt];
    }
}