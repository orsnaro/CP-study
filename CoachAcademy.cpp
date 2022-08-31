#include <bits/stdc++.h>

using namespace std; //prob b backtracking
using ll = long long;

const int N = 220;
vector<char> vec1, vec2;

bool is_less(bool less, int n) {

  if (n < 0)
    return less;

  less = vec1[n] < vec2[n] ? 1 : 0;

  if (less)
    return is_less(less, n - 1);

    return is_less(less, -1);
}

bool is_greater(bool greater, int n) {

  if (n < 0)
    return greater;

  greater = vec1[n] > vec2[n] ? 1 : 0;

  if (greater)
    return is_greater(greater, n - 1);

    return is_greater(greater, -1);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    char temp;
    cin >> temp;
    vec1.push_back(temp);
  }
  sort(vec1.begin(), vec1.end());

  for (int i = 0; i < n; i++) {
    char temp;
    cin >> temp;
    vec2.push_back(temp);
  }
  sort(vec2.begin(), vec2.end());

  if (is_less(0, n - 1) || is_greater(0, n - 1))
    cout << "YES\n";
  else
    cout << "NO\n";

  return 0;
}