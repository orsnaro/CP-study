//https://leetcode.com/problems/create-grid-with-exactly-one-path/?envType=daily-question&envId=2026-10-27
public class Solution {
    public string[] CreateGrid(int m, int n) {
        int hash_cnt = n - 1; 

        StringBuilder rest_row = new StringBuilder();
        rest_row.Append('#', hash_cnt);
        rest_row.Append('.');

        StringBuilder fst_row = new StringBuilder();
        fst_row.Append('.', n);

        string[] grid = new string[m];
        grid[0] = fst_row.ToString();
        for(int r = 1; r < m; r++){
            grid[r] = rest_row.ToString();
        }


        return grid;
    }
}