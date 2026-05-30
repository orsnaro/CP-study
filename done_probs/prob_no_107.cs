//problem: https://leetcode.com/problems/move-zeroes/description/?envType=study-plan-v2&envId=leetcode-75

public class Solution {
    public void MoveZeroes(int[] nums) {
        //there is a more efficient sol that wont use new array/list or removeall()  (iterate on the items if it is non-zero swap with FIRST zero you found and keep swaping zeroes with numbers this pushes zeroes to end)
        List<int> numsL = new List<int>(nums);

        int zCnt = numsL.RemoveAll((value) => (value == 0));
        while(zCnt > 0){
            numsL.Add(0);
            zCnt--;
        }

        numsL.CopyTo(nums);
    }
}