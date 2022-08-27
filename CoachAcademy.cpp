#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// const int N = 1e6;
// int arr[N];

// bitmasks prob : B
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int N;
    cin >> N;
    if (log2(N) - (int)log2(N) == 0) {
      cout << -1 << '\n';
      continue;
    }
    for (int a = 1; a < N; ++a) {
      if ((a^N) <= N) {
        cout << a << ' ' << (a ^ N) << '\n';
        break;
      }
    }
  }

  return 0;
}