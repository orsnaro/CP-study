#include <bits/stdc++.h>
#define fastio                                                                 \
  (ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL));
// backtacking   prob : J (didnt use backtracking)
using namespace std;
using ll = long long;

const int N = 1e5;
// ll x, target, cntr;

// int is_mul(int x, int cntr) {

// }

int main() {
  fastio;

  int target, n;

  while (cin >> target >> n) {
    int arr[N] = {0};
    for (int i = 0; i < n; ++i)
      cin >> arr[i];

    vector<int> vec2;
    int mx = -1;
    for (ll msk = 0; msk < (1ll << n * 1ll); msk++) {
      int sum = 0;
      vector<int> vec;

      for (int i = 0; i < n; ++i) {
        ll sz = 1 << (n - 1);
        if (msk & (sz >> i * 1ll)) {
          vec.push_back(arr[i]);
          sum += arr[i];
        }
      }
      if (sum <= target) {
        mx = max(sum, mx);
        if (sum >= mx)
          vec2.swap(vec);
      }
    }
      for (int &x : vec2)
        cout << x << ' ';
      cout << "sum:" << mx << '\n';
  }

  return 0;
}