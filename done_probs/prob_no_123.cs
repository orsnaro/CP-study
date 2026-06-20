//problem: https://leetcode.com/contest/biweekly-contest-185/problems/create-grid-with-exactly-one-path/

public class Solution {
    public string[] CreateGrid(int m, int n) {
        string[] g = new string[m];
        
        for (int r = 0; r < m; r++){
            string row = "";
            for (int c = 0; c < n; c++){
                if(c == 0 || r == m - 1){
                    row += ".";
                } else {
                    row += "#";
                }
            }
            g[r] = row;
        }
       
        return g;
    }
}
