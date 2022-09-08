// num. theory I   prob : C hyprid of my solution with coach solution
//not neccesary i know but cant delete my answer cuz of tle :()
#include <bits/stdc++.h>
#define fastio                                                                 \
  (ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL));
using namespace std;
using ll = long long;
using ull = unsigned long long;

<<<<<<< HEAD
// const int = 1e6;
// char arr[N];
=======
const ll N = 1e6 +10;
// int freq[N];
vector<int> v(N);

void seive(ll a) { // nlog(log(n))

  v[1] = 1;
  for (int i = 3; i <= a; i += 2)
    v[i] = i;
  for (int i = 2; i <= a; i += 2)
    v[i] = 2;

  for (ll p = 3; p * p <= a; p++) {
    if (v[p] == p) {
      for (ll i = p * p; i <= a; i += p) {
        if (v[i] == i)
          v[i] = p;
      }
    }
  }

  if (v[a] == a) {
    cout << "1\n" << a << '\n';
    return;
  }

  vector<ll> tv;
  int cntr = 0;
  pair<int, ll> mx = {-1, 0};
  while (a != 1) {
    tv.push_back(v[a]);
    ll temp = a;
    a /= v[a];

    if (v[temp] == v[a])
      cntr++;
    else {
      cntr++;
      if (mx.first <= cntr)
        mx = {cntr, v[temp]};
      cntr = 0;
    }
  }

  cout << mx.first << '\n';

  int rst = 1;
  for (auto x : tv) {
    if (x == mx.second and mx.first != 1) {
      --mx.first;
      cout << x << ' ';
    } else
      rst *= x;
  }
  cout << rst << '\n';

  return;
}

>>>>>>> 0139f6c8e9a8d016557e2a5aed8f8ccf491c9ee5
int main() {
  fastio;

<<<<<<< HEAD

=======
  int t;
  cin >> t;
  while (t--) {
    ll a;
    cin >> a;
    
    if (a > 100000) {
      ll p = -1, cntr = 0, n = a;
      for (ll i = 2; i * i <= n; ++i) {

        int temp = 0;
        for (; n % i == 0; n /= i, ++temp);

        if (cntr < temp) {
          cntr = temp;
          p = i;
        }
      }
      if (n > 1 and cntr < 1) {
        cntr = 1;
        p = n;
      }
      cout << cntr << '\n';
      for (int i = 1; i < cntr; ++i) {
        cout << p << ' ';
        a /= p;
      }
      cout << a << '\n';
    }else seive(a);
  }

>>>>>>> 0139f6c8e9a8d016557e2a5aed8f8ccf491c9ee5
  return 0;
}
