//problem: https://dometrain.com/take/course/hands-on-csharp-for-beginners-3256091/implementing-interfaces-69955661/

using System;

public class Solution
{
    public static int GetTotalDistanceTraveled(Car car, int[] movements)
    {
        foreach (int d in movements)
        {
            car.Move(d);
        }
        return car.TotalDistance;
        // Move the car according to each movement value
        // Return the car's total distance traveled
    }
}

// TODO: Implement the IMovable interface in the Car class
public class Car : IMovable
{
    public string Model { get; set; }
    public int TotalDistance { get; private set; }
    
    public Car(string model)
    {
        Model = model;
        TotalDistance = 0;
    }
    
    // Implement the Move method from IMovable
    // Each call should add the distance to TotalDistance
    public void Move(int distance)
    {
        TotalDistance += distance;        
    }
}