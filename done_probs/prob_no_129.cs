//problem: https://dometrain.com/take/course/hands-on-csharp-for-beginners-3256091/the-base-keyword-69955655/

using System;

public class Person
{
    public string Name { get; protected set; }
    
    public Person(string name)
    {
        Name = name;
    }
    
    public virtual string GetInfo()
    {
        return $"Name: {Name}";
    }
}

public class Employee : Person
{
    public string Department { get; private set; }
    
    // TODO: Create a constructor that takes name and department
    // Use the base keyword to call the Person constructor with the name
    // Then set the Department property
    public Employee(string name, string department) : base(name)
    {
        Department = department;
    }
    
    // TODO: Override GetInfo to include department information
    // Use the base keyword to call the base class GetInfo method
    // Then append the department info
    public override string GetInfo()
    {
       return base.GetInfo() + "," + $" Department: {Department}";
    }
}

public class Solution
{
    public static string CreateEmployee(string name, string department)
    {
        Employee emp = new Employee(name, department);
        return emp.GetInfo();
    }
}