//prob: https://www.hackerrank.com/challenges/circular-array-rotation
//R   5min
//th1 3min
//c1  10m
//c2  1.5m
//d 25min (getting used to C# in PS for some reason List<int> with initial size returns zero when using '.Count()' on it but static int[] arr won't)



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
     * Complete the 'circularArrayRotation' function below.
     *
     * The function is expected to return an INTEGER_ARRAY.
     * The function accepts following parameters:
     *  1. INTEGER_ARRAY a
     *  2. INTEGER k
     *  3. INTEGER_ARRAY queries
     */

    public static List<int> circularArrayRotation(List<int> a, int k, List<int> queries)
    {
        Queue<int> aq = new Queue<int>();
        for (int i = a.Count() - 1; i >= 0; i-- ){aq.Enqueue(a[i]);}
        
        for(int i = 0; i < k; i++){
            int tmp = aq.Dequeue();
            aq.Enqueue(tmp);
        }
        
        int[] ans = new int[aq.Count()];
        //for (int i = a.Count() - 1; i >= 0; i-- ){aq.Enqueue(a[i]);}
        for (int i = ans.Count() - 1; i >= 0; i--){
             ans[i] = aq.Dequeue();
        }
        
        List<int> ans2 = new List<int>();
        int sz = queries.Count();
        for(int i = 0; i < sz; i++){
            ans2.Add(ans[queries[i]]);
        }
        return ans2;
    }

}

class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        string[] firstMultipleInput = Console.ReadLine().TrimEnd().Split(' ');

        int n = Convert.ToInt32(firstMultipleInput[0]);

        int k = Convert.ToInt32(firstMultipleInput[1]);

        int q = Convert.ToInt32(firstMultipleInput[2]);

        List<int> a = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(aTemp => Convert.ToInt32(aTemp)).ToList();

        List<int> queries = new List<int>();

        for (int i = 0; i < q; i++)
        {
            int queriesItem = Convert.ToInt32(Console.ReadLine().Trim());
            queries.Add(queriesItem);
        }

        List<int> result = Result.circularArrayRotation(a, k, queries);

        textWriter.WriteLine(String.Join("\n", result));

        textWriter.Flush();
        textWriter.Close();
    }
}
