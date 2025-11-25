//Gorkking  Algorithm:  CH: 9 | Dynamic Programming | Ex: 9.2 |  Page 178 | Knapsack problem

using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Numerics;

class Cp
{

   static string[] Items = new string[5];
   static Dictionary<string, int> Scores = new Dictionary<string, int>();
   static Dictionary<string, int> Weights = new Dictionary<string, int>();
   static void Main()
   {
      
      //original knapsack problem
      // Items[0] = "Guitar";
      // Items[1] = "Stereo";
      // Items[2] = "Laptop";

      // Scores["Guitar"] = 1500;
      // Scores["Stereo"] = 3000;
      // Scores["Laptop"] = 2000;

      // Weights["Guitar"] = 1;
      // Weights["Stereo"] = 4;
      // Weights["Laptop"] = 3;
      // int rows = 3;
      // int cols = 4;
////////////////////////////////
      //ex 9.1
      // Items[0] = "Guitar";
      // Items[1] = "Stereo";
      // Items[2] = "Laptop";
      // Items[3] = "Iphone";
      // Items[4] = "MP3";

      // Scores["Guitar"] = 1500;
      // Scores["Stereo"] = 3000;
      // Scores["Laptop"] = 2000;
      // Scores["Iphone"] = 2000;
      // Scores["MP3"] = 1000;

      // Weights["Guitar"] = 1;
      // Weights["Stereo"] = 4;
      // Weights["Laptop"] = 3;
      // Weights["Iphone"] = 1;
      // Weights["MP3"] = 1;
      // int rows = 5;
      // int cols = 4;
////////////////////////////////
      //ex 9.2
      //target knapsack is 6lb (fill with best value)
      //rows:items, colms:sub-knabs (sub problems)
      //               1 2 3 4 5 6
      //3lb 10 Water  |           |
      //1lb 3  Book   |           |
      //2lb 9  Food   |           |
      //2lb 5  Jacket |           |
      //1lb 6  Camera |           |
      Items[0] = "Water";
      Items[1] = "Book";
      Items[2] = "Food";
      Items[3] = "Jacket";
      Items[4] = "Camera";

      Scores["Water"] = 10;
      Scores["Book"] = 3;
      Scores["Food"] = 9;
      Scores["Jacket"] = 5;
      Scores["Camera"] = 6;

      Weights["Water"] = 3;
      Weights["Book"] = 1;
      Weights["Food"] = 2;
      Weights["Jacket"] = 2;
      Weights["Camera"] = 1;
      int rows = 5;
      int cols = 6;


      //solution start
      int bestScore = 0;
      string? bestItems = null;
      string?[,] grid = new string?[rows, cols]; //(default value is null which is diff than empty "" string)
      // bool isFirstColm = true;
      bool isFirstRow = true;


      for (int i = 0; i < rows; i++)
      {
         isFirstRow = i < 1; //handle out of bounds 
         for (int j = 0; j < cols; j++)
         {
            // isFirstColm = j < 1;

            int crntItemScore =  Scores[Items[i]];

            if (Weights[Items[i]] > j+1) //this if-cond handles casse: (can't even ft 1 item) i.e. if current item is bigger than current knapsack size
            {
               if (isFirstRow)
               {
                  continue;//leave null(zero)
               }
               grid[i, j] = grid[i-1,j]; //take prev_best for same subproblem i.e.(crnt sack size) since current is zero any way i.e.(cant take any)
               continue;
            }

            //case1:  for a 4lb sack  THEN (j==3) LET  (item w==2)  THEN  (j - w = 1)  -> actual remain w == 2 -> var remain w == 1  THUS! no neeed to extra -1 when indexing colms
            //case2!: for a 1lb sack  THEN (j==0) LET  (item w==1)  THEN  (j - w = -1) -> actual remain w == 0 -> var remain w ==-1  THUS! its ok no remaining weight to fit extra items
            //case3!: for a 2lb sack  THEN (j==1) LET  (item w==1)  THEN  (j - w = 0)  -> actual remain w == 1 -> var remain w == 0  THUS! ok index j=1 has the items that can fit in 1lb!
            int remainWeight = j - Weights[Items[i]]; //handles case if no remaining weight (-'ve or zero) or can't put the item in

            //check if you can get extra  items in current sack!
            string? extraItemsName = null; //if there is no space for extra items this stays default (null)
            if (!isFirstRow && remainWeight >= 0 ) //why '!isFirstRow' -> if it's first row no items before this any way to fill the extra weight
            {
               extraItemsName = grid[i-1, remainWeight];
            }

            int extraItemsScore = (extraItemsName == null) ? 0 : SumItemsScore(extraItemsName.Split(','));
            int crntMax = crntItemScore + extraItemsScore;
            int prevMax = 0;
            if (!isFirstRow && grid[i-1,j] != null) //either no prev items to take get their max or the prev items couldnt fit so prevMax stays 0
            {
               prevMax = SumItemsScore(grid[i-1,j].Split(','));
            }

            //find & set cell max value
            if (prevMax >= crntMax)
            {
               bestScore = prevMax;
               bestItems = grid[i - 1, j];
            }
            else
            {
               bestScore = crntMax;
               bestItems = extraItemsName ==  null ? Items[i] : Items[i] + ',' + extraItemsName; 
            }
            //update grid
            grid[i, j] = bestItems;
         }
      }
      
      //prnit solution
      Console.OutputEncoding = System.Text.Encoding.Unicode; // show emojies 3:
      Console.WriteLine($"Optimal Solution is {grid[rows - 1, cols - 1]} ✔️");
      Console.WriteLine($"With Total Items Score  of {bestScore} ✔️");
   }

   static int SumItemsScore(string[] items)
   {
      int totalScore = 0;
      foreach (string item in items)
      {
         totalScore += Scores[item.Replace(",","")]; //fix items appending issues (extra delims) (II think this not needed any more)
      }
      return totalScore;
   }
}