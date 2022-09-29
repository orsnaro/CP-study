// sheet : general  (16)  prob: B
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
      string s1,s2; cin >> s1 >> s2;
      int sz1 = s1.size();
      int sz2 = s2.size();
      if ( s1 == s2 ){
        cout << 0 << '\n';
        return 0;
      }
      if ( sz1 == 0 or sz2 == 0){
        cout << (sz1 != 0 ? sz1 : sz2);
        return 0;
      }

      int mx = max ( sz2 ,sz1);
      int cntr =  sz1 + sz2;
      for (size_t i = 0; i < mx; i++) {
        if ( s1[sz1 - 1 - i] != s2[sz2 - 1 - i]  and sz1 - 1 -i > -1 and sz2 - 1 - i > -1){
          cntr -= 2*i;
          cout << cntr << '\n';
          return 0;
        }else if ( sz2 -1 - i <= -1 or sz1 - 1 - i <= -1 ){
          sz2 > sz1 ? cntr = (sz2 -i) : cntr = (sz1 - i);
          cout << cntr << '\n';
          return 0 ;
        }
        cntr -= 2;
      }
      cout << 0 << '\n';
    }
    return 0;
}
