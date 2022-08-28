#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// const int N = 1e6;
// int arr[N];
// STLs II prob : C
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int N; cin>> N;
  while(N--){
    unordered_set <int> uno_st;
    int ans=0;
    int n,m; cin >> n >> m ;
    for(int i =0; i < n; ++i){
      int temp; cin >> temp;
      uno_st.emplace(temp);
    }
    for(int i =0; i < m; ++i){
      int temp; cin >> temp;
      if(uno_st.count(temp))
        ans++;
    }
    cout << ans << '\n';
  }
  return 0;
}