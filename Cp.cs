//https://leetcode.com/problems/number-of-recent-calls/?envType=study-plan-v2&envId=leetcode-75
public class RecentCounter {

    public Queue<int> q; //in actual code this will not exposed like this
    public RecentCounter() {
        this.q = new Queue<int>(); 
    }
    
    public int Ping(int t) {
        q.Enqueue(t);

        while(q.Count > 0 && q.Peek() < t-3000){q.Dequeue();}

        return q.Count;
    }
}

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter obj = new RecentCounter();
 * int param_1 = obj.Ping(t);
 */