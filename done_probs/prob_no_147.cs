//problem: https://dometrain.com/take/course/hands-on-csharp-for-beginners-3256091/defining-records-69955669/

using System;

// Define your Person record here

public class Solution
{
    public record Person(string Name, int Age);
    public static Person CreatePerson(string name, int age)
    {
        // Create and return a Person record
        return new Person(name, age);
    }
    
    public static string GetPersonInfo(Person person)
    {
        // Return the person's info as "Name: [name], Age: [age]"
        return $"Name: {person.Name}, Age: {person.Age}";
    }
    
    public static bool ArePeopleEqual(Person person1, Person person2)
    {
        // Check if two Person records are equal
        return person1 == person2;   
    }
}