//problem: https://dometrain.com/take/course/hands-on-csharp-for-beginners-3256091/defining-interfaces-69955660/

using System;

// Define your IMovable interface here
public interface IMovable
{
    // Add the Move() method signature
    string Move();
}

public class Solution
{
    public static string TestMovement(IMovable movable)
    {
        // Call the Move() method on the movable object and return the result
        return movable.Move();
    }
}