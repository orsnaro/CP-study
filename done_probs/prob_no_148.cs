//problem: https://dometrain.com/take/course/hands-on-csharp-for-beginners-3256091/record-with-expressions-69955671/

using System;

public class Solution
{
    public static Person UpdateAge(Person person, int newAge)
    {
        // Use 'with' expression to create a new Person with the updated age
        var p2 = person with {Age = newAge};
        return p2;
    }
    
    public static Product ApplyDiscount(Product product, decimal newPrice)
    {
        // Use 'with' expression to create a new Product with the updated price
        var p2 = product with {Price = newPrice};
        return p2;
    }
    
    public static Employee Promote(Employee employee, string newTitle, int salaryIncrease)
    {
        // Use 'with' expression to create a new Employee with updated title and salary
        var emp2 = employee with {Title = newTitle, Salary = employee.Salary + salaryIncrease};
        return emp2;
    }
}