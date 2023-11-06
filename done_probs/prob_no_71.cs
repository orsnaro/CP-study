// you can use top level statments from C# 9 and onwards 
// i.e.( no need to specify class and Main() in the main file but other files need to have the full structure for compiler to figure the main file )
			// Console.WriteLine("Hello, World!"); //(you can run this directly with out the whoe down struct)

//prob: https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=true


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
     * Complete the 'diagonalDifference' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts 2D_INTEGER_ARRAY arr as parameter.
     */

    public static int diagonalDifference(List<List<int>> arr)
    {
        int n = arr[0].Count();
        int sd1 = 0, sd2 = 0;

        for (int i = 0; i < n; i++) {
            sd1 += arr[i][i];
            sd2 += arr[i][n - i - 1];
        }

        return Math.Abs(sd1 - sd2);
    }

}

class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int n = Convert.ToInt32(Console.ReadLine().Trim());

        List<List<int>> arr = new List<List<int>>();

        for (int i = 0; i < n; i++)
        {
            arr.Add(Console.ReadLine().TrimEnd().Split(' ').ToList().Select(arrTemp => Convert.ToInt32(arrTemp)).ToList());
        }

        int result = Result.diagonalDifference(arr);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
