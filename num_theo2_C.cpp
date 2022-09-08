#include <bits/stdc++.h>
using namespace std;
using ll =long long ;

// const int = 1e6;
// char arr[N];
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t; cin >> t;
  while (t--){
    ll a,b; cin >> a >>b;
    if ( b % a == 0)
      cout << a << ' ' << b << '\n';
    else cout << "-1\n";
  }
  return 0;
}
