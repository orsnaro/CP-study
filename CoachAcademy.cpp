// sorting II prob : F
#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr);                                                            \
  cout.tie(nullptr);
#define f first
#define s second
using ll = long long;

using namespace std;
const int N = 1e6;
int arr[N];
vector<pair<int, int>> v;

int main() {
  fastio;

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
      cin >> arr[i];
    sort(arr, arr + n);

    if (n & 1)
      cout << arr[n / 2] << ' ';

    for (int i = n / 2 - 1; i >= 0; i--)
      cout << arr[i] << ' ' << arr[n - 1 - i] << ' ';

    cout << '\n';
  }

  return 0;
}