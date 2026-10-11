//https://leetcode.com/problems/sum-of-squares-of-special-elements/

//this is O(sqrt(n)), simple looping will be O(n) 

public class Solution {
    public int SumOfSquares(int[] nums) {
        int res = 0;
        int n = nums.Length;
        int sqrt = (int)Math.Sqrt(n);
        for(int i = 1; i <= sqrt; i++){
            if(n%i == 0){
                res += (int)Math.Pow(nums[i-1],2);

                int tmp = (int)n/i;
                res += (tmp == i ? 0 : (int)Math.Pow(nums[tmp-1],2) );
            }
        }
        return res;
    }
}