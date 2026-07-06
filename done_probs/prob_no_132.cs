//problem: https://dometrain.com/take/course/hands-on-csharp-for-beginners-3256091/abstract-methods-69955659/


using System;

public abstract class Shape
{
    public string Name { get; set; }

    public Shape(string name)
    {
        Name = name;
    }

    // TODO: Declare an abstract method GetArea() that returns a double
    // Abstract methods have no body - just the signature followed by a semicolon
    public abstract double GetArea();
}

public class Rectangle : Shape
{
    public double Width { get; set; }
    public double Height { get; set; }

    public Rectangle(double width, double height) : base("Rectangle")
    {
        Width = width;
        Height = height;
    }

    // TODO: Override and implement the GetArea() method
    // Return the area of the rectangle (width * height)
    public override double GetArea()
    {
        return Width * Height;
    }
}

public class Solution
{
    public static double CalculateArea(double width, double height)
    {
        Rectangle rect = new Rectangle(width, height);
        return rect.GetArea();
    }
}