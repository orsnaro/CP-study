#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// const int N = 1e6;
// int arr[N];
// ll unsorted[N];
// ll sorted[N];

// SRQ  prob : G this sheet will end T_T
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int q;
  cin >> q;
  bool is_1stbk = 1;
  map<int, int> mp;
  int lft = 0, right = 0;
  while (q--) {
    char qry;
    cin >> qry;
    int id;
    cin >> id;
    if (qry == 'L') {
      if (is_1stbk) {
        mp.insert({id, 0});
        is_1stbk = 0;
      } else {
        lft++;
        mp.insert({id, lft});
      }
    } else if (qry == 'R') {
      if (is_1stbk) {
        mp.insert({id, 0});
        is_1stbk = 0;
      } else {
        right--;
        mp.insert({id, right});
      }
    } else {
      if (mp[id] < 0) {
        int mn = min(abs(lft + abs(mp[id])), abs(right) - abs(mp[id]));
        cout << mn << '\n';
      } else {
        int mn = min(abs(mp[id] + abs(right)), lft - mp[id]);
        cout << mn << '\n';
      }
    }
  }
  return 0;
}
