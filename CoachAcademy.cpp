#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// const int N = 1e6;

vector<char> arr;
ll strtoint(vector<char> &vec);

// bitmasks prob : H proud of it :)
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin.tie(nullptr);
  cout.tie(nullptr);

  string s;
  cin >> s;
  for (char x : s)
    arr.push_back(x);

  int sz = arr.size();

  ll sz2 = 1 << sz - 2;
  ll sum = 0;
  for (ll msk = 0; msk < (1ll << ((sz * 1ll) - 1ll)); ++msk) {

    vector<char> temp;
    if (sz == 1) {
      cout << strtoint(arr);
      break;
    }

    for (int i = 0; i < sz - 1; ++i) {

      char ch;
      if (i == 0) {
        ch = arr[0];
        temp.push_back(ch);
      }
      if (msk & (sz2 >> i)) { // 1b equal '+'
        sum += strtoint(temp);
        temp.clear();
        ch = arr[i + 1];
        temp.push_back(ch);
      } else {
        ch = arr[i + 1];
        temp.push_back(ch);
      }
    }
    sum += strtoint(temp);
  }
  if (sz == 1)
    return 0;

  cout << sum << '\n';

  return 0;
}

ll strtoint(vector<char> &vec) {
  int sz = vec.size();
  ll converted2int = 0;
  for (int i = 0; i < sz; ++i) {
    if (vec[i] >= 48 and vec[i] <= 57) {
      converted2int *= 10;
      converted2int += (vec[i] - 48);
    } else
      break;
  }

  return converted2int;
}