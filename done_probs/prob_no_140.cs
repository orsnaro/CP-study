//problem: https://leetcode.com/problems/rank-transform-of-an-array/?envType=daily-question&envId=2026-07-12


public class Solution {
    public int[] ArrayRankTransform(int[] arr) {
        int sz = arr.Length;
        if (sz == 0)
            return new int[0];

        int[] idxs = System.Linq.Enumerable.Range(0, sz).ToArray();
        Array.Sort(idxs, (idx1, idx2) => arr[idx1].CompareTo(arr[idx2]));


        int[] res = new int[arr.Length];
        for(int i = 0, r = 1; i < sz; i++){
            if(i > 0 && arr[idxs[i-1]] == arr[idxs[i]]){
                res[idxs[i]] = r-1;
            } else {
                res[idxs[i]] = r;
                r++;
            }
        }

        return res;
    }
}