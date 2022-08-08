#include <bits/stdc++.h>

using namespace std;

using ll = long long;
const ll N = 1e9;
int arr[N];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin.tie(nullptr);
  cout.tie(nullptr);

  multiset < pair < ll, ll >> mst;
  int n;
  cin >> n;
  int m = n;
  ll moves = 0;

  while (n--) {
    pair < ll, ll > pr;
    cin >> pr.second;
    pr.first = abs(m - pr.second);
    mst.insert(pr);

  }

  for (int i = m, j = 0; i != 0; ++j, --i) {
    moves = moves + ((mst.begin() -> first) - j);
    mst.erase(mst.begin());
  }
  
  cout << moves << '\n';
  return 0;
}