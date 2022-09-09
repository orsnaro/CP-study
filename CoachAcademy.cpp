#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
using ll =long long ;

const int  N = 1e6;
// char arr[N];
set <ll> st;

int main() {
  fastio;
  ll a ,b ; cin >> a >> b ;
  ll diff = abs (a -b);
  for ( int i = 1 ; i <= diff/i ; ++i){
    if ( diff % i == 0 and a % i == 0 and b % i == 0){
      st.insert(-i);
    }
  }


  int t; cin >> t;
  while (t--){
    ll l,h; cin >> l >> h;
    for ( auto &x : st){
      if (-x <= h and -x >=l)
        cout  << -x << '\n';
      break;
    }
  }
  return 0;
}
