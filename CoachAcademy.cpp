#include <bits/stdc++.h>
// num. theory II prob : D 
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
    for (int i = 0; i < n; ++i) {
      cin >> arr[i];
      if (arr[i] > arr[0]) {
        int temp;
        temp = arr[i];
        arr[i] = arr[0];
        arr[0] = temp;
      }
    }
    int mx_gcd = __gcd(0, arr[0]);
    cout << mx_gcd << " ";
    for (int i = 1; i < n; ++i) {
      int ngcd = -1;
      int indx = -1;
      for (int j = i; j < n; ++j) {
        if (__gcd(mx_gcd, arr[j]) >= ngcd) {
          ngcd = __gcd(mx_gcd, arr[j]);
          indx = j;
        }
      }
      int temp = arr[i];
      arr[i] = arr[indx];
      arr[indx] = temp;
      mx_gcd = ngcd;
      cout << arr[i] << ' ';
    }

    cout << '\n';
  }

  return 0;
}