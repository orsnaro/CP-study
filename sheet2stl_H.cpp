#include <bits/stdc++.h>

using namespace std;

int main() {//optimize time (got time limit)
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  priority_queue <int,vector <int>, greater<int> > pq; //to sort from smaller
  deque <int>dq;//main container

  int nq;
  cin >> nq;

  while(nq--){

    int x,qry;
    cin >> qry;


    if(qry==1){
      cin >> x;
      dq.push_back(x);
    }

    else if (qry==2){
        cout << dq.front() << '\n';
        dq.pop_front();
    }
      else if (qry==3){//sort

        int pq_sz = pq.size();
        if(pq_sz!=0){
          for(int i=0 ; i<pq_sz; ++i)
            pq.pop();
        }

        for( auto &x : dq)
         pq.push(x);

        dq.clear();
        pq_sz= pq.size();

        for(int i=0 ; i<pq_sz; ++i){
         dq.push_back(pq.top());
          pq.pop();
        }

      }
  }

    return 0;
}
