//problem: https://leetcode.com/problems/max-number-of-k-sum-pairs/description/?envType=study-plan-v2&envId=leetcode-75

public class Solution {
    public int MaxOperations(int[] nums, int k) {
        // int[] freq = new int[(int)1e9+2];
        Dictionary<int,int> freq = new Dictionary<int,int>();
        int res = 0;
        int sz = nums.Length;

        for(var i = 0; i < sz; i++){
            if (freq.ContainsKey(nums[i])) {
                freq[nums[i]]++;
            } else {
                freq[nums[i]] = 1;
            }
            
            if(nums[i] < k && freq[nums[i]] != 0 && freq.ContainsKey(k - nums[i]) && freq[k - nums[i]] != 0 ){
                if(nums[i] == k - nums[i]){
                    res += freq[nums[i]] / 2;
                    freq[nums[i]] = (freq[nums[i]] & 1) == 0 ? 0 : 1;
                } else {
                    var mnf = Math.Min(freq[nums[i]], freq[k - nums[i]]);
                    res += mnf;
                    freq[nums[i]] -= mnf;
                    freq[k - nums[i]] -= mnf;
                }
            }    
        }

        return res;
    }
}