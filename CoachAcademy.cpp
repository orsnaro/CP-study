#include <bits/stdc++.h>
// num. theory II prob : G
#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr);                                                            \
  cout.tie(nullptr);

using namespace std;
using ll = long long;

const int N = 1e6;
int arr[N];

int main() {
  fastio;

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int temp = (N + 1);

    for (int i = 0; i < n; ++i) {
      cin >> arr[i];
      if (arr[i] < temp)
        temp = arr[i];
    }

    int k = 0;

    for (int i = 0; i < n; ++i) {
      if (arr[i] == temp)
        continue;
      k = __gcd(k, arr[i] - temp);
    }

    if (!k)
      cout << -1 << '\n';
    else
      cout << k << '\n';
  }

  return 0;
}