#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define fastio   (ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL));                                                                 


// const int N = 1e6;
// int arr[N];
ll x, target, cntr;

int is_mul(int x, int cntr) {

  if (x == target)
    return cntr;
  // if( (target/2.0)-(target/2) != 0 or (target/3.0)-(target/3) != 0  )
  //   return -1;

  if (target)
    if (target == x) {
      return cntr;
    } else if (target < x)
      return -1;

  int x2 = is_mul(x * 2, cntr + 1);
  int x3 = is_mul(x * 3, cntr + 1);

  if (x2 == -1)
    return x3;
  else
    return x2;
}

// bitmasks  prob : E backtacking
int main() {
  fastio;

  cin >> x >> target;
  cout << is_mul(x, cntr) << '\n';

  return 0;
}