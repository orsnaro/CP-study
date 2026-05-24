//problem: https://leetcode.com/problems/product-of-array-except-self/?envType=study-plan-v2&envId=leetcode-75


public class Solution {
    public int[] ProductExceptSelf(int[] nums) {

        int sz = nums.Length;

        int l = nums[0];
        int r = nums[sz-1];

        int[] res = new int[sz];
        for (var i = 0; i < sz; i++){
            res[i] = 1;
        }

        for (int i = 1; i < sz; i++){
            res[sz - i - 1] *= r;
            r *= nums[sz - i -1];

            res[i] *= l;
            l *= nums[i];
        }

        // for (int i = 1; i < sz; i++){
        // }

        //clearer answer: is to separate right products arr from left products arr. also left and right be actually of type array then in a final loop res[i] = l[i] * r[i]; //see: prefix product array
        return res;

    }
}