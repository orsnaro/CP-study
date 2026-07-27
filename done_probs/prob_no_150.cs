//https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/?envType=daily-question&envId=2026-07-27

public class Solution {
    public int MaxProduct(int[] nums) {
        int big = 0;
        int big2 = 2;

        foreach(var n in nums){
            if(n >= big){
                big2 = big;
                big = n;
            } else {
                big2 = (n >= big2 ? n : big2);
            }
        }

        return (big2 - 1) * (big - 1);
    }
}