//problem: https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-i/?envType=daily-question&envId=2026-06-02

public class Solution {
    public int EarliestFinishTime(int[] landStartTime, int[] landDuration, int[] waterStartTime, int[] waterDuration) {
        
        int szL = landStartTime.Length;
        int szW = waterStartTime.Length;
        int mx = Math.Max(szL, szW);
        var lMinStart = (start: landStartTime[0], duration: landDuration[0], type: 0);
        var wMinStart = (start: waterStartTime[0], duration: waterDuration[0], type: 1);
        
        for (int i = 0; i < mx; i++){//now for first ride: save best water ride and  best land ride: 
            if(i < szL){
                if (landStartTime[i] + landDuration[i] <= lMinStart.start + lMinStart.duration){
                    lMinStart.start = landStartTime[i];
                    lMinStart.duration = landDuration[i];
                    lMinStart.type = 0;
                }
            }

            if(i < szW){
               if (waterStartTime[i] + waterDuration[i] <= wMinStart.start + wMinStart.duration){
                    wMinStart.start = waterStartTime[i];
                    wMinStart.duration = waterDuration[i];
                    wMinStart.type = 1;
                }
            }
        }


        var l2MinStart = (start: landStartTime[0], duration: landDuration[0], type: 0);
        var w2MinStart = (start: waterStartTime[0], duration: waterDuration[0], type: 1);
        int res0 = lMinStart.start + lMinStart.duration;
        int res1 = wMinStart.start + wMinStart.duration;
        Console.WriteLine(res0);
        Console.WriteLine(res1);
        for (int i = 0; i < mx; i++){//use best land res0 with rest of water rides to find the second best ride among water rides , same with best water res1
            if(i < szL){
                if(Math.Max(0, landStartTime[i] - res1) + landDuration[i] <= Math.Max(0, l2MinStart.start - res1) + l2MinStart.duration){
                    l2MinStart.start = landStartTime[i];
                    l2MinStart.duration = landDuration[i];
                    l2MinStart.type = 0;
                }
            }

            if(i < szW){
                if(Math.Max(0, waterStartTime[i] - res0) + waterDuration[i] <= Math.Max(0, w2MinStart.start - res0) + w2MinStart.duration){
                    w2MinStart.start = waterStartTime[i];
                    w2MinStart.duration = waterDuration[i];
                    w2MinStart.type = 1;
                }
            }
        }

        res0 += Math.Max(0, w2MinStart.start - res0) + w2MinStart.duration;
        res1 += Math.Max(0, l2MinStart.start - res1) + l2MinStart.duration;


        return Math.Min(res1,res0);
    }
}