//problem: https://leetcode.com/problems/can-place-flowers/?envType=study-plan-v2&envId=leetcode-75

public class Solution {
    public bool CanPlaceFlowers(int[] flowerbed, int n) {
        //first assumed we can move already planted flowers -> false assumbtion ):
        //another sol might be using three pointers and for loop (simpler logic but takes more time 
         //sol:

        if(n == 0)//edge case
            return true;

        bool res = true;
        bool prev_planted = false;

        foreach (int f in flowerbed){
           
            
            if(prev_planted){

                if(f == 1){ //prev + also current is planted (remove previously platned and continue)
                    n += 1;
                } else {
                    prev_planted = false;
                }
                 
                if(n == 0)
                    break;

            } else {

                if(n == 0)
                    break;

                if(f != 1){
                    n -= 1;
                }

                prev_planted = true;

            }
        }
        
        res = (n == 0); //do we have flowers left we couldn't plant?

        if(flowerbed.Length > 1 && (flowerbed[^1] + flowerbed[^2] == 2))//handle last index edge case
            res = false;
        

        return res;
    }
}