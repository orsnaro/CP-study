// https://www.codechef.com/START98D/problems/AIRM




#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
   ios_base::sync_with_stdio(false);                                           \
   cin.tie(nullptr);                                                           \
   cout.tie(nullptr);
#define F first
#define S second
using ll = long long;
const int N = 1e5 + 5, M = INT_MAX;
const ll LM= LONG_LONG_MAX;



int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;
   int t = 1;
   cin >> t;
   while (t--) {
        int arr[1500] = {};
        int n; cin >> n;
        for (int i = 0; i < n*2; i++)
        {
            int tmp; cin >> tmp;
            arr[tmp]++; 
        }
        priority_queue <int> pq;
        for (int i = 0; i < 1500; i++)
            pq.push(arr[i]);
        
        int ans = pq.top();
        cout << ans << '\n';
        
   }

   return 0;
}