
//https://leetcode.com/problems/find-words-containing-character/
public class Solution {
    public IList<int> FindWordsContaining(string[] words, char x) {
        var res = words
                    .Select((word, index) => (word, index))
                    .Where(tpl => tpl.word.Contains(x))
                    .Select(tpl => tpl.index);
        return res.ToList();
    }
}