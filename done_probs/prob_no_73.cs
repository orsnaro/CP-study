// you can use top level statments from C# 9 and onwards 
// i.e.( no need to specify class and Main() in the main file but other files need to have the full structure for compiler to figure the main file )
			// Console.WriteLine("Hello, World!"); //(you can run this directly with out the whoe down struct)

//prob: https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true


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
     * Complete the 'plusMinus' function below.
     *
     * The function accepts INTEGER_ARRAY arr as parameter.
     */

    public static void plusMinus(List<int> arr)
    {
        int n = arr.Count();
        double[] cnt = new double[3]; // p , n , z
        
        for(int i = 0; i < n; i++){
            if (arr[i] > 0) cnt[0]++;
            else if ( arr[i] == 0 ) cnt[2]++;
            else cnt[1]++;
        }
        
        Console.WriteLine( Math.Round( (cnt[0] /= n) , 6 ) );
        Console.WriteLine( Math.Round( (cnt[1] /= n) , 6 ) );
        Console.WriteLine( Math.Round( (cnt[2] /= n) , 6 ) );
    }

}

class Solution
{
    public static void Main(string[] args)
    {
        int n = Convert.ToInt32(Console.ReadLine().Trim());

        List<int> arr = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(arrTemp => Convert.ToInt32(arrTemp)).ToList();

        Result.plusMinus(arr);
    }
}
