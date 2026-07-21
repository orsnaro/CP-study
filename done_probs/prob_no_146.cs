//problem: https://dometrain.com/take/course/hands-on-csharp-for-beginners-3256091/value-type-behavior-69955665/


using System;

public struct Player
{
    public string Name;
    public int Health;
    public int Score;

    public Player(string name, int health, int score)
    {
        Name = name;
        Health = health;
        Score = score;
    }

    public void TakeDamage(int damage)
    {
        Health -= damage;
        if (Health < 0) Health = 0;
    }
}

public class Solution
{
    public static int GetOriginalHealthAfterModifyingCopy(int initialHealth, int damageToApply)
    {
        // 1. Create an original Player with Name="Hero", the given initialHealth, and Score=0
        Player p1 = new Player(health: initialHealth, name: "Hero", score: 0);
        // 2. Create a copy of the original player by simple assignment
        Player p2 = p1;
        // 3. Apply damage to the COPY using TakeDamage()
        p2.TakeDamage(10);
        // 4. Return the Health of the ORIGINAL player
        return p1.Health;
        // 
        // This demonstrates that modifying a struct copy does NOT affect the original!
    }
}