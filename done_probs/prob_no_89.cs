
//problem: https://leetcode.com/problems/greatest-common-divisor-of-strings/submissions/2005851230/?envType=study-plan-v2&envId=leetcode-75
public class Solution {
    public string GcdOfStrings(string str1, string str2) {
          
        string bestGcd = "";
        int minL = Math.Min(str1.Length, str2.Length);
        //string maxS = str1.Length >= str2.Length ? str1 : str2; //not needed actually -> length is ensured to be >= 1

        for (int i = 0; i < minL; i++){
          //  var newGcd = maxS.SubString(0,i+1);
            var newGcd = str1.Substring(0,i+1);

            string rep1 = str1.Replace(newGcd,"");
            string rep2 = str2.Replace(newGcd,"");

            if( rep1 == "" && rep2 == "" ){
                bestGcd = newGcd;
            }
        }

        return bestGcd;
    }
}