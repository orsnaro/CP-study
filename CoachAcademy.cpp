#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int N = 100;
int arr[N];
// bitmasks prob : B
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n;
  cin >> n;
  int mxlen = -1;
  for (int i = 0; i < n; ++i)
    cin >> arr[i];
  for (int msk = 0; msk < (1 << n); msk++) {
    int mxval = -1;
    vector<int> vec;
    int prev = -1;
    for (int i = 0; i < n; ++i) {
      bool iszero = !(msk & ((1 << n - 1) >> i));
      if (iszero) {
        if (prev < arr[i]) {
          prev = arr[i];
          vec.push_back(prev);
        }
      }
    }
    int vsz = vec.size();
    mxlen = max(mxlen, vsz);
  }
  cout << mxlen << endl;
  return 0;
}