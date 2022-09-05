#include <bits/stdc++.h>
#define fastio                                                                 \
  (ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL));

// num. theory I   prob : B
using namespace std;
using ll = long long;

const int N = 1e6;
int arr[N];
vector<int> v;

void sol_seive(int max) {
  arr[1] = 1;

  for (int i = 0; i < max; ++i)
    arr[i] = i;
  for (int i = 4; i < max; i += 2)
    arr[i] = 2;

  bool prime[n + 1];
  fill(prime, prime + n + 1, true);

  for (ll p = 3; p <= n / p; p++) {

    if (arr[i] == i) {
      for (ll i = p * p; i <= n; i += p)
        if (arr[j] == j)
          arr[j] = i;
    }
  }
}

void t_prime(int x) {
  int sz = v.size();
  for (int i = 0; i < sz; ++i) {
    int temp = v[i];
    cntr = 0;
    while (temp != 1) {
      cntr++;
      temp = temp / arr[temp];
    }
    if (cntr == x) // the num of prime divisor u want to filter accoridingly;
      cout << "num :" << v[i] << " has dist. num. of prime div. u wanted\n";
    else
    cout << v[i] << " doesnt have" << x << "dis. prime div.\n";
  }
}

int main() {
  fastio;
  int n;
  cin >> n;
  int k = n;
  int mx = -1;
  while (n--) {
    int temp;
    cin >> temp;
    v.push_back(temp);
    mx = max(v[k - n + 1], mx);
  }

  sol_seive(mx);

  int x;
  cin >> x; // number of  distinct prime divisor  including 1
  t_prime(x);

  return 0;
}
