// https://leetcode.com/problems/determine-if-two-strings-are-close/?envType=study-plan-v2&envId=leetcode-75

public class Solution {
    public bool CloseStrings(string word1, string word2) {
        //thought: w1,w2 needs to have 1. same unique char list, 2. same length, 3. same freqs length (even if char with that freq is replaced but w1 if had 1,4,5 char freq the freq will still have in it 1 4 5 different order or differen char but same freq. list)

        int sz1 = word1.Length;
        int sz2 = word2.Length;

        if(sz1 != sz2)
            return false;
        
        int[] freq1 = new int[26];
        int[] freq2 = new int[26];
        for(int i = 0; i < sz1; i++){
            freq1[word1[i] - 'a']++;
            freq2[word2[i] - 'a']++;
        }

        // if(!word1.ToArray().ToHashSet().SetEquals(word2.ToArray().ToHashSet()))
        //     return false;
        //better check for if both has same unique characters (no x2 conversion or x2 hashing over head even SetEquals needs to search full hashset element acess in array is O(1) in hashset its amortized O(1))
        for (int i = 0; i < 26; i++){
            if(freq1[i] > 0 && freq2[i] == 0){
                return false;
            }
            if(freq2[i] > 0 && freq1[i] == 0){
                return false;
            }
        }



        Array.Sort(freq1);
        Array.Sort(freq2);
        if(!freq1.SequenceEqual(freq2))
            return false;
        


        return true;
    }
}