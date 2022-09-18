#include <bits/stdc++.h>
// sorting II prob : J
#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr);                                                            \
  cout.tie(nullptr);

using namespace std;
using ll = long long;

const int N = 1e6;

bool comp(int a, int b)
{
 return (a < b);
}

int main() {
  fastio;

  int t; cin >> t;
  while ( t-- ){
    // int temp[100000+5] = {0};
    int arr[100000 + 10] = {0};
    int ans = 1;
    int n; cin >> n;
    bool neg = 1, pve = 1;
    for (size_t i = 0; i < n; i++){
      cin >> arr[i];
      if ( arr[i] >= 0)
        neg = 0;
      else pve = 0;
    }
    sort(arr, arr+n, [](int i, int j) { return abs(i) > abs(j); });
    if ( n == 5 ){
      cout << arr[0]*arr[1]*arr[2]*arr[3]*arr[4] << '\n';
      continue;
    }
    else if (neg){
      continue;
      cout << arr[n-5]*arr[n-4]*arr[n-3]*arr[n-2]*arr[n-1] << '\n';
    }else if (pve){
      cout << arr[0]*arr[1]*arr[2]*arr[3]*arr[4] << '\n';
      continue;
    }else {
      ans = arr[0]*arr[1]*arr[2]*arr[3]*arr[4];
      if ( ans < 0){
        int mx = ans;
        int temp = ans;
        for (int i = 4; i >= 0; --i){
          ans = temp;
          ans /= arr[i];
          for (size_t j = 5; j < n; j++) {
            ans *= arr[j];
            mx = max (ans , mx);
            ans /= arr[j];
          }
        }
          cout << mx << '\n';
      }
      else cout << ans << '\n';
    }


  }
  return 0;
}
