//problem: https://dometrain.com/take/course/hands-on-csharp-for-beginners-3256091/default-interface-methods-69955663/

using System;

public class Solution
{
    public static string GetVehicleInfo(IVehicle vehicle)
    {
        // Call the GetDescription() method on the vehicle
        // This method has a default implementation in the interface
        // Some vehicles may override it, others use the default
        return vehicle.GetDescription();
    }
}

// Implement this class using IVehicle interface
// Do NOT override GetDescription() - use the default implementation
public class Bicycle : IVehicle
{
    public string Brand { get; }
    
    public Bicycle(string brand)
    {
        Brand = brand;
    }
    
    // TODO: Implement the required interface members
    // Do NOT implement GetDescription - let it use the default
    // public string GetDescription() => $"Vehicle: Trek";
}

// Implement this class using IVehicle interface
// Override GetDescription() to provide custom behavior
public class Car : IVehicle
{
    public string Brand { get; }
    public int Horsepower { get; }
    
    public Car(string brand, int horsepower)
    {
        Brand = brand;
        Horsepower = horsepower;
    }
    
    // TODO: Implement the required interface members
    // TODO: Override GetDescription to include horsepower info
    public string GetDescription() => $"Car: {Brand} ({Horsepower} HP)";
}