#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// const int N = 1e6;
// int arr[N];

// stls II prob : E
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);


  string ref("qwertyuiopasdfghjkl;zxcvbnm,./");
  char n; cin >> n;
  string s; cin >> s;

  int sz = s.size();
  if (n == 'R') {
    for (int i = 0; i < sz; ++i)
      cout << ref[(ref.find(s[i])) - 1];
  } else {
    for (int i = 0; i < sz; ++i)
      cout << ref[(ref.find(s[i])) + 1];
  }

  return 0;
}