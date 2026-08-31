// https://leetcode.com/problems/equal-row-and-column-pairs/?envType=study-plan-v2&envId=leetcode-75

public class Solution {
    public int EqualPairs(int[][] grid) {
        int res = 0;

        int sz = grid.Length;
        long[] hashedR = new long[sz]; //jagged array but its guaranteed inner arrays have same size  so no null or size checks needed + even better its nxn -> squared
        // long[] hashedC = new long[sz]; //we can compute this from hashedR btw and i think there is even more efficient way to get the colms hashes after rows hashes

        //pre comp.
        for (int i = 0; i < sz; i++){
            long hr = hash(grid[i], sz);
            hashedR[i] = hr;
        }
        for (int i = 0; i < sz; i++){
            int [] colm = getColm(grid, i, sz);
            long hc = hash(colm, sz);
            foreach(var hr in hashedR) {//calc solution here instead of extra loop + extra colms hashes arr
                if (hc == hr)
                    res++;
            }
        }

        return res;
    }

    int[] getColm(int[][] grid, int i, int sz){
        int[] colm = new int[sz];
        for(int j = 0; j < sz; j++)
            colm[j] = grid[j][i];  
        
        return colm;
    }

    long hash(int[] tuple, int sz){
        long mod = 1_000_000_007; //reduce colisions to ~1/mod !
        long pBase = 100_001; // 10^5 + 1 i.e.(max + 1) -> encode position value so hash stays order sensitive -> no colisions if same values but different order
        long h = 0;
        for(int i = 0; i < sz; i++){
            h = (h * pBase + tuple[i]) % mod; // power needed !
        }

        return h;
    }
}


        Array.Sort(freq1);
        Array.Sort(freq2);
        if(!freq1.SequenceEqual(freq2))
            return false;
        


        return true;
    }
}