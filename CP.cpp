#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
   ios_base::sync_with_stdio(false);                                           \
   cin.tie(nullptr);                                                           \
   cout.tie(nullptr);
#define F first
#define S second
using ll = long long;
const int N = 1e5, M = 1e9;
int arr[N];
int arr2[N]; //indx 0 -> 1e5 + 1
vector <ll> v;

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;
   int t = 1;
   cin >> t;
   while (t--) {
		int n; cin >> n;
		set <ll> st;
		for (size_t i = 0; i < n; i++)
		{
			ll tmp; cin >> tmp;
			if (tmp >= N) arr2[(tmp - 1e5)ll]++;
			else arr[tmp]++;
			st.insert(tmp);
		}
		for ( &x : st)
			v.push_back(x);

		int ans = 0;
		for (ll i = 1; i < n - 1; i++)
		{
			if ( v[i] >= N ){
				ans += v[i] * arr2[v[i] - 1e5];

			}else{
				ans += v[i] * arr[v[i]];
			}
		}

		cout << ans << '\n';
   }

   return 0;
}