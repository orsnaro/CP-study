//problem: https://dometrain.com/take/course/hands-on-csharp-for-beginners-3256091/the-static-keyword-69955793/

using System;

public class Solution
{
    // Declare a static field here to track the counter
    static private int Id = default;
    
    public static int GetNextId()
    {
        return ++Id;
    }
    
    public static int GetCurrentCount()
    {
        return Id;
    }
    
    public static void ResetCounter()
    {
        Id = 0;
    }
}