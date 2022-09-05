#include <bits/stdc++.h>
#define fastio                                                                 \
  (ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL));

// num. theory I   prob : B no i doesnt OF. it TLEs -_-)
using namespace std;
using ll = long long;

// const int N = 1e6;
// int arr[N];
unordered_map <ll,int> mp;
vector <ll> v; 
void sol_t_seive(ll max) {
  for (ll p = 2; p <= max ; p++) {
      for (ll i = p + p; i <= max; i += p){
        bool is_wanted = mp.count(i);
        if (is_wanted)
          ++mp[i];
      }
  }
  for ( auto &x : v){
      if(mp[x] == 3)
        cout << "YES\n";
      else cout << "NO\n";
  }
  return;
}

int main() { 
  fastio;
  int n; cin >> n;
  ll mx = -1;

  for ( int i = 0 ; i < n; ++i){
    ll temp; cin >> temp;
    v.push_back(temp);
    mp[temp] = 2;
    mx = max(temp, mx);
  }
  sol_t_seive(mx);
  return 0;
}
