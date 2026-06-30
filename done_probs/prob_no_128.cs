//problem: https://dometrain.com/take/course/hands-on-csharp-for-beginners-3256091/static-fields-69955652/

using System;

public class Solution
{
    public static int GetInstanceCount()
    {
        // Reset the counter before testing
        Player.ResetCount();
        
        // Create 3 Player instances (Alice, Bob, Charlie) and return the count
        // Your code here
        Player Alice = new Player("Alice");
        Player Bob = new Player("Bob");
        Player Charlie = new Player("Charlie");
        
        return Player.GetCount();
    }
    
    public static int CreatePlayers(int count)
    {
        // Reset the counter before testing
        Player.ResetCount();
        
        // Create 'count' Player instances and return the count
        // Your code here
        for(int i = 0; i < count; i++)
        {
            var tmp = new Player("tmp");
        }
        
        return Player.GetCount();
    }
}