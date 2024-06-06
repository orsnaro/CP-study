//prob: https://www.hackerrank.com/challenges/time-conversion/problem?isFullScreen=true


using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;

class Result
{

    /*
     * Complete the 'timeConversion' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts STRING s as parameter.
     */

    public static string timeConversion(string s)
    {
        string ans = s.Replace("AM", "");
        string hours = s.Substring(0, 2);
        int hoursI = 0;
        
        if(hours == "12"){
            hours = (s.EndsWith("PM") ? "12" : "00");
        } else{
            if(s.EndsWith("PM")){
                hoursI = Int32.Parse(hours) + 12;
            } else {
                hoursI = Int32.Parse(hours);
            }
            hours = hoursI.ToString().PadLeft(2,'0');
        }
        
        //Console.WriteLine(ans);
        ans = ans.Remove(0,2);
        ans = ans.Replace("PM", "");
        ans = ans.Replace("AM", "");
        ans = hours + ans;
        
        return ans;
    }

}

class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        string s = Console.ReadLine();

        string result = Result.timeConversion(s);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
