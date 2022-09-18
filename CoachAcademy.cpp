// sorting II prob : J
#include <bits/stdc++.h>
#define f first
#define s second
using ll = long long;

const int N = 1e6;

int main() {

  int t; cin >> t;
  while ( t-- ){
    // int temp[100000+5] = {0};
    int arr[100000 + 10] = {0};
    int a1,a2,a3;
    int n; cin >> n;
    // bool neg = 1, pve = 1;
    for (size_t i = 0; i < n; i++){
      cin >> arr[i];
    }
    sort( arr,arr + n);
    a1 = arr[0]*arr[1]*arr[n-1]*arr[n-2]*arr[n-3];
    a2 = arr[n-1]*arr[n-2]*arr[n-3]*arr[n-4]*arr[n-5];
    a3 = arr[1]*arr[2]*arr[0]*arr[3]*arr[n-1];
    int mx = max(a1,a2);
    mx = max(mx,a3);
    cout << mx << '\n';
  }
  return 0;
}
