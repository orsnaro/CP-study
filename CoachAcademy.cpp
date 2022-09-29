// sheet : general  (16)  prob: A
#include <bits/stdc++.h>
#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);

#define f first
#define s second
using namespace std;
using ll = long long;
const int N = 1e6, M = 1e7;
int arr[N];

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while (t--) {
      vector <int> v;
      int n; cin >> n;
      int cntr = 1, prev = -1 , crnt = -1;
      for (size_t i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        if ( i == 0)
          prev = crnt = tmp;

        prev = crnt ;
        crnt = tmp;

        if ( tmp == 1 and i != 0 ){
          cntr++;
          v.push_back(prev);
        }

        if  ( i == n -1 ){
          v.push_back(tmp);
          break;
        }
      }
      cout << cntr << '\n';
      for (auto &x : v)
        cout << x <<' ';
    }
    return 0;
}
