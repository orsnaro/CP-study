#include <bits/stdc++.h>
// sorting II prob : H
#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr);                                                            \
  cout.tie(nullptr);

using namespace std;
using ll = long long;

const int N = 1e6;
int arr[N];
vector <int> v;

int main() {
  fastio;
  int n; cin >> n;
  for (int i = 0; i < n; ++i)
    cin >> arr[i];

  ll ssum[n],unsum[n];
  // ssum[n]= 0;
  // unsum[n] = 0;

  unsum[0] = arr[0];
  for ( int i = 1; i <n; ++i ){
    if (unsum[i] == 0)
      break;
    unsum[i] = arr[i] + unsum[i - 1];
  }

  sort (arr , arr + n);
  ssum[0] = arr[0];
  for ( int i = 1; i <n; ++i ){
    if (ssum[i] == 0)
      break;
    ssum[i] = arr[i] + ssum[i - 1];
  }

  int m; cin >> m;
  while(m--){
    int t,l,r; cin >> t >> l >> r;
    if (t == 1){
      if ( l == 1)
        cout << unsum[r - 1];
      else
        cout << unsum[r - 1] - unsum[l - 2];
    }
    else{ // type = 2 sorted
      if(l == 1)
        cout << ssum[r - 1];
      else
        cout << ssum[r - 1] - ssum[l - 2];
    }
    if (m)
      cout << '\n';
  }
  return 0;
}
