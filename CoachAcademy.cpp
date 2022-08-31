#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int N = 110;
int arr[N];

int summation(int n) {

  if (n == 0)
    return arr[0];

  return (arr[n]+ summation(n-1));
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;
  int cntr = 1;
  while (t--) {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) 
      cin >> arr[i];

    cout << "Case " << cntr << ": "  << summation(n - 1) << '\n';
    memset(arr, 0, N);
    ++ cntr;
  }

  return 0;
}