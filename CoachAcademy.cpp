#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int N = 1e5;
// int arr[N];

// stls II prob : H
int main() { // optimize time (got time limit)
  // ios_base::sync_with_stdio(false);
  // cin.tie(nullptr);
  // cout.tie(nullptr);

  priority_queue<int, vector<int>, greater<int>> pq;   // to sort from smaller
  deque<int> dq; // main container

  int t; cin >> t;
  while (t--) {

    int x, qry;
    scanf("%d",&qry);

    if (qry == 1) {
      scanf("%d",&x);
      dq.push_back(x);
      continue;
    }
    else if (qry == 2) {
      if(!pq.empty()){
        printf("%d\n",pq.top());
        pq.pop();
      }else{
        cout << dq.front() << '\n';
        dq.pop_front();
      }
      continue;
    } 
    else if (qry == 3) { // sort
      // int temparr[N]={0};
      // int pq_sz = pq.size();
      // if (pq_sz != 0) {
      //   pr.swap(emptier);
      // }
      // int i = 0;
      // for (auto &x : dq) {
      //   temparr[i] = x;
      //   i++;
      // }
      // sort(temparr,temparr+i);

      // dq.clear();
      // // pq_sz = pq.size();
      // for (int j = 0; j < i; ++j) 
      //   dq.push_back(temparr[j]);
      for (auto &x : dq)
        pq.push(x);
      dq.clear();
    }
  }

  return 0;
}
