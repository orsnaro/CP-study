#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int N = 1e6;
int arr[N];
ll unsorted[N];
ll sorted[N];

// SRQ  prob : D this sheet will end T_T
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
    // mset.insert(arr[i]);
    // mp.insert({arr[i],i});
  }

  unsorted[0] = arr[0];
  for (int i = 1; i < n; ++i) {
    unsorted[i] = unsorted[i - 1] + arr[i];
  }
  sort(arr, arr + n);
  sorted[0] = arr[0];
  for (int i = 1; i < n; ++i) {
    sorted[i] = sorted[i - 1] + arr[i];
  }

  int m;
  cin >> m;
  while (m--) {
    int type, l, r;
    cin >> type >> l >> r;
    switch (type) {
    case 1:
      cout << unsorted[r - 1] - unsorted[l - 2] << '\n';
      break;
    case 2:
      cout << sorted[r - 1] - sorted[l - 2] << '\n';
      break;
    }
  }

  return 0;
}
