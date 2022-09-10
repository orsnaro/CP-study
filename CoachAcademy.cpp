#include <bits/stdc++.h>
// num. theory II prob : M
#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr);                                                            \
  cout.tie(nullptr);

using namespace std;
using ll = long long;

// const int N = 1e6;
// char arr[N];

int dif2, dif3, dif5;
int main() {
  fastio;

  int a, b;
  cin >> a >> b;

  if (a == b) {
    cout << 0 << endl;
    return 0;
  }

  while (a % 2 == 0) {
    dif2++;
    a /= 2;
  }
  while (a % 3 == 0) {
    dif3++;
    a /= 3;
  }
  while (a % 5 == 0) {
    dif5++;
    a /= 5;
  }
  while (b % 2 == 0) {
    dif2--;
    b /= 2;
  }
  while (b % 3 == 0) {
    dif3--;
    b /= 3;
  }
  while (b % 5 == 0) {
    dif5--;
    b /= 5;
  }

  if (a != b)
    cout << -1 << endl;
  else
    cout << abs(dif2) + abs(dif3) + abs(dif5) << endl;

  return 0;
}
