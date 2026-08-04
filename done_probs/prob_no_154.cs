// https://leetcode.com/problems/find-missing-elements/?envType=daily-question&envId=2026-08-04
public class Solution {
    public IList<int> FindMissingElements(int[] nums) {
        PriorityQueue<int, int> pq = new PriorityQueue<int, int>();
        List<int> res = new List<int>();

        foreach(var n in nums)
            pq.Enqueue(n,n);

        int prev_n = pq.Dequeue();
        while(pq.Count != 0){
            if(pq.Peek() - prev_n > 1){
                int tmp = prev_n;
                while(pq.Peek() - tmp > 1){
                    tmp++;
                    res.Add(tmp);
                }
            } 
            prev_n = pq.Dequeue();
        }

        return res;
    }
}