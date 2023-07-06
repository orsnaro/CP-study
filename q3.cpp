// prob: 

#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
   ios_base::sync_with_stdio(false);                                           \
   cin.tie(nullptr);                                                           \
   cout.tie(nullptr);
#define F first
#define S second
using ll = long long;
const int N = 1e5, M = 1e8;
// int arr[N];

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;
   int t = 1;
   cin >> t;
   while (t--) {

    int n; cin >> n;
    string s , t , u ; cin >> s >> t >> u;

		int k = -1;
		if ( s[0] > t[0]){
			k = ('z'- s[0]) + (s[0] - 'a') + 1;
		}else{
			k = abs(s[0] - t[0])
		}

    for (int  i = 0; i < n; i++)
    {
        if ( (u[i] + k) <=  'z') {
          u[i] = u[i] + k ;
        }else {
          int z = (u[i] + k) % 'z';
          u[i] = 'a' + (z-1);
        }
    }
    cout << u << '\n';
    
   }

   return 0;
}