#include <bits/stdc++.h>
// num. theory II prob : B (my modified method yay)
#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr);                                                            \
  cout.tie(nullptr);
using namespace std;
using ll = long long;

const int N = 1e6;
// char arr[N];
set<ll> st;

int main() {
  fastio;

  ll a, b;
  cin >> a >> b;
  ll diff = abs(a - b);
  if (a == b) {
    for (int i = 1; i <= a / i; ++i) {
      if (a % i == 0) {
        st.insert(-i);
        st.insert(-(a / i));
      }
    }
  } else {
    for (int i = 1; i <= diff / i; ++i) {
      if (diff % i == 0 and a % i == 0 and b % i == 0) 
        st.insert(-i);

      if ((a % (diff / i)) == 0 and (b % (diff / i)) == 0)
        st.insert(-(diff / i));
      }
    }

    int t;
    cin >> t;
    while (t--) {
      ll l, h;
      cin >> l >> h;
      bool done = 0;
      for (auto &x : st) {
        if (-x <= h and -x >= l) {
          cout << -x << '\n';
          done = 1;
          break;
        }
      }
      if (!done)
        cout << "-1\n";
    }
    return 0;
  }
