#include <bits/stdc++.h>
#define fastio                                                                 \
  (ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL));

// num. theory I   prob : B try linear sieve later )
using namespace std;
using ll = long long;
using ull = unsigned long long;
const ll N = 1e7;
// int arr[N];
vector<ll> v;
vector<bool> bitv(N);

void sol_t_seive( /* ll max */ ) {
  // bitset <max + 1> btst;
  fill(bitv.begin(), bitv.end(), true);
  for (ll p = 2; p * p <= N; p++) {
    if (bitv[p]) {
      for (ull i = p * p; i <= N; i += p)
        bitv[i] = false;
    }
  }

  for (ll &x : v) {
    double dsquare = sqrt(x);
    ll lsquare = sqrt(x);
    if (x == 1)
      cout << "NO\n";
    else if (bitv[lsquare] && !(dsquare - lsquare))
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return;
}


int main() {
  fastio;
  int n;
  cin >> n;
  // ll mx = -1;

  for (int i = 0; i < n; ++i) {
    ll temp;
    cin >> temp;
    v.push_back(temp);
    // mx = max(temp,mx);
  }
  sol_t_seive(/* mx */);
  return 0;
}
