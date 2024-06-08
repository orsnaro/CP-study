//prob: https://www.hackerrank.com/challenges/extra-long-factorials/
//R   3min
//th1 0min
//c1  3m
//d 1min (C++ doesn't have biginteger equivalant unless I use boost lib)



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
     * Complete the 'extraLongFactorials' function below.
     *
     * The function accepts INTEGER n as parameter.
     */

    public static void extraLongFactorials(int n)
    {
        System.Numerics.BigInteger ans = 1;
        
        while(n-- > 0){
            ans *= (n + 1);
        }
        Console.WriteLine(ans);
    }

}

class Solution
{
    public static void Main(string[] args)
    {
        int n = Convert.ToInt32(Console.ReadLine().Trim());

        Result.extraLongFactorials(n);
    }
}
