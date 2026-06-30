//problem: https://dometrain.com/take/course/hands-on-csharp-for-beginners-3256091/abstract-classes-69955658/

using System;

public abstract class Shape
{
    public abstract double CalculateArea();
    public abstract double CalculatePerimeter();
}


public class Circle : Shape
{
    
    public double Radius {get; set;}
    
    public Circle(double radius)
    {
        Radius = radius;
    }
    
    public override double CalculateArea()
    {
        return Math.PI * Math.Pow(Radius, 2);
    }
    
    public override double CalculatePerimeter()
    {
        return 2 * Math.PI * Radius;
    }
}


public class Rectangle : Shape
{
    
    public double Width {get; set;}
    public double Height {get; set;}
    
    public Rectangle(double width, double height)
    {
        Width = width;
        Height = height;
    }
    
    public override double CalculateArea()
    {
        return Width * Height;
    }
    
    public override double CalculatePerimeter()
    {
        return (Width + Height) * 2;
    }
}

public class Solution
{
    public static double GetCircleArea(double radius)
    {
        Circle circle = new Circle(radius);
        return Math.Round(circle.CalculateArea(), 2);
    }
    
    public static double GetCirclePerimeter(double radius)
    {
        Circle circle = new Circle(radius);
        return Math.Round(circle.CalculatePerimeter(), 2);
    }
    
    public static double GetRectangleArea(double width, double height)
    {
        Rectangle rect = new Rectangle(width, height);
        return Math.Round(rect.CalculateArea(), 2);
    }
    
    public static double GetRectanglePerimeter(double width, double height)
    {
        Rectangle rect = new Rectangle(width, height);
        return Math.Round(rect.CalculatePerimeter(), 2);
    }
}