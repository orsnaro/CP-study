//problem: https://leetcode.com/problems/increasing-triplet-subsequence/?envType=study-plan-v2&envId=leetcode-75
public class Solution {
    public bool IncreasingTriplet(int[] nums) {
        int big = int.MinValue;
        int secBig = int.MinValue;
        
        int sz = nums.Length;

        for(int i = 0; i < sz; i++){
            if(nums[sz-i-1] >= big){
                big = nums[sz-i-1];
            } else if (nums[sz-i-1] >= secBig){
                secBig = nums[sz-i-1];
            } else{
                return true;
            }
        }

        return false;
    }
}


//other sol: 2n complexitysolution (somehow i thought the first solution is not possible to be that easy and went with this 2n first no big difference in time but readability and simplicity of sol 1 is waay better)
// public class Solution {
//     public bool IncreasingTriplet(int[] nums) {

//         int sz = nums.Length;

//         int[] gbarr = new int[sz];
//         int[] sfarr = new int[sz];

//         gbarr[sz-1] =  nums[sz-1];
//         sfarr[0] = nums[0];

//         for(int i = 0; i < sz - 1; i++){
//             if(nums[i] <= sfarr[i] ){
//                 sfarr[i+1] = nums[i];
//             } else{
//                 sfarr[i+1] =  sfarr[i];
//             }


//             if(nums[sz-i-1] >= gbarr[sz-i-1]){
//                 gbarr[sz-i-2] = nums[sz-i-1];
//             } else{
//                 gbarr[sz-i-2] = gbarr[sz-i-1];
//             }

//         }



//         for(int i = 0; i < sz; i++){
//             if (nums[i] > sfarr[i] && nums[i] < gbarr[i]){
//                 return true;
//             }
//         }

//         return false;
    
//     }
// }