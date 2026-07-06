//problem: https://dometrain.com/take/course/hands-on-csharp-for-beginners-3256091/multiple-interfaces-69955662/

using System;

public class Solution
{
    public static string TestRobot(Robot robot)
    {
        // Call robot.Move() and robot.MakeSound()
        // Return both results combined with a space between them
        // Example: "Moving forward Beep boop!"
        return robot.Move() + " " + robot.MakeSound();
        
    }
}

// TODO: Implement the Robot class that implements BOTH IMovable and ISoundMaker
public class Robot : IMovable, ISoundMaker
{
    // Implement both interfaces
    // Move() should return "Moving forward"
    // MakeSound() should return "Beep boop!"
    public string Move() => "Moving forward";
    public string MakeSound() => "Beep boop!";
}