//problem: https://leetcode.com/problems/gcd-of-odd-and-even-sums/?envType=daily-question&envId=2026-07-15
public class Solution {
    public int GcdOfOddEvenSums(int n) {
        int so = 0;
        int se = 0;

        int stp = 0;
        int odd = 1;
        while(stp < n){
            so += odd;
            se += odd + 1;

            odd += 2;
            stp ++;
        }

        return GCD(so, se);
    }

    public int GCD(int a, int b){
        if (b == 0)//base case
            return a;

        return GCD(b,  a % b);
    }
}