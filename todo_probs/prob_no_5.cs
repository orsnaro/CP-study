//prob: https://www.hackerrank.com/challenges/encryption/

//my sample cases expected output is exact same as my actual output yet some shows WA IDK why I can do it in multiple styles and langs but for now will leave the question in HK discussion so I know from people what is the issue with this specific C# implementation



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
     * Complete the 'encryption' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts STRING s as parameter.
     */

    public static string encryption(string s)
    {
        s = s.Replace(" ", "");
        int sz = s.Length;
        double qrt = Math.Sqrt(sz);
        int slc = (int)Math.Ceiling(qrt);
        int slf = (int)Math.Floor(qrt);
        slf = (slf * slc >= sz ? slf : slf + 1);
        char[,] ans = new char[slf, slc];
        
        int lstjidx = 0;
        for(int i = 0; i < slf; i++){
            for (int j = 0; j < slc && lstjidx < sz; j++, lstjidx++){
                ans[i, j] = s[lstjidx];
            }
        }
        
        string ans2 = "";
        for(int i = 0; i < slc; i++){
            for (int j = 0; j < slf; j++){
                ans2 += ans[j, i];
            }
           if (i < slc - 1) ans2 += " ";
        }
        
        return ans2;
    }

}

class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        string s = Console.ReadLine();

        string result = Result.encryption(s);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
