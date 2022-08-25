#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// const int N = 100;
// int arr[N];

// bitmasks  prob : E
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int x;
  cin >> x;
  vector<ll> sprlky;
  for (int msk = 0; msk < (1 << 10); ++msk) {
    ll temp = 0;
    int cntr = 0;
    for (int i = 0; i < 10; ++i) {
      if (msk & (1 << i)) { // 0b =4 and 1b =7
        temp *= 10;
        temp += 7;
        cntr++;
      } else {
        temp *= 10;
        temp += 4;
        cntr--;
      }
      if (cntr == 0)
        sprlky.push_back(temp);
    }
  }
  sort(sprlky.begin(), sprlky.end());
  for (int i = 0; i < sprlky.size(); ++i) {
    if (sprlky[i] >= x) {
      cout << sprlky[i] << '\n';
      return 0;
    }
  }
  return 0;
}