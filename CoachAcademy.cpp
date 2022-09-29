// sheet : general  (16)  prob: B
#include <bits/stdc++.h>
#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);

#define f first
#define s second
using namespace std;
using ll = long long;
const int N = 1e6, M = 1e7;
int arr[N];

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
      int n; cin >> n;
      ll  psum[n + 10] = {0};
      multiset <int, greater<int>> mst;
      ll sum = 0;
      for ( int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        sum += tmp;
        mst.insert(tmp);
      }

      if ( sum == 0 ){
        cout << "NO\n";
        continue;
      }

      psum[0] = *mst.begin();
      auto base1_itr = mst.begin();
      base1_itr ++;
      auto eitr = mst.end();
      for (int i = 1; base1_itr != eitr; ++base1_itr , ++i){
        psum[i] = *base1_itr + psum[i - 1];
        if( sum - psum[i] < psum[i] ){
          if ( i + 1 < n - 1 -i)
          cout << "YES\n";
          else cout << "NO\n";

          break;
        }
      }
    }
    return 0;
}
