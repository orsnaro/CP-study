// sheet : genral 4 (15)  prob: A
#include <bits/stdc++.h>

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr);                                                            \
  cout.tie(nullptr);
  

using namespace std;
using ll = long long;

const int N = 1e6;
int arr[N];

int main() {
  fastio;

  int t = 1;
  cin >> t;
  while (t--) {
    int c[3] = {0};
    int n; cin >>  n;
    for (int i = 0; i < n; i++){
      int val; cin >> val;
      int temp = val % 3;
      c[temp]++;
    }
    int ans = 0;
    while ( c[0] != c[1] or c[2] != c[1] or c[0] != c[2] ){
      int mx = max(c[0], max(c[1],c[2]));
      if ( mx == c[0]){
        c[0] --;
        c[1] ++;
      }
      else if ( mx == c[1]){
        c[1] --;
        c[2]++;
      }
      else if ( mx == c[2]){
        c[2]--;
        c[0]++;
      }

      ans++;
    }
    cout << ans  << '\n';
  }
  return 0;
}