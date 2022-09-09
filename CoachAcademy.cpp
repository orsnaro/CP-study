#include <bits/stdc++.h>
// num. theory II prob : B
#define fastio ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
using ll =long long ;

const int  N = 1e6;
// char arr[N];
set <ll> st;

void coDiv(ll a, ll b)
{
    ll n = gcd(a, b);
 
    for (int i = 1; i <= n / i; i++) {
        if (n % i == 0) {
          st.insert(-i);
          st.insert(-(n / i));
        }
    }
}

int main() {
  fastio;

  ll a ,b ; cin >> a >> b ;
  coDiv (a ,b);

  int t; cin >> t;
  while (t--){
    ll l,h; cin >> l >> h;
    bool done = 0;
    for ( auto &x : st){
      if (-x <= h and -x >=l){
        cout  << -x << '\n';
        done = 1;
        break;
      }
    }
    if (!done)
      cout << "-1\n";
  }
  return 0;
}
