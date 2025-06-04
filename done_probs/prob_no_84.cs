//prob: https://leetcode.com/problems/two-sum/?envType=problem-list-v2&envId=oizxjoit

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int p1 = 0;
        int p2 = nums.size() - 1;
        while(p1 < p2){
            if(nums[p1] + nums[p2] == target){
                return {p1, p2};
            }
            else if (nums[p1] + nums[p2] > target|| nums[p1] + nums[p2] < target){
               p1++;
               if(p1 == p2){
                p1 = 0;
                p2--; 
               }
            }
        }   
        return {};
    }
};