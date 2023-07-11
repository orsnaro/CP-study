
// https://codeforces.com/contest/1237/problem/B?mobile=true









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
// int arr[N];

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;
   int t = 1;
   // cin >> t;
   while (t--) {
		int n; cin >> n;

		vector <int> v1;
		for (int i = 0; i < n; i++)
		{
			int tmp; cin >> tmp;
			v1.push_back(tmp);
		}
		unordered_map <int , int> mp;
		for (int i = 0; i < n; i++)
		{
			int tmp; cin >> tmp;
			mp[tmp] = i;
		}


		int ans = 0;
		for (int i = 0; i < n - 1; i++)
		{
			int crnt = v1[i];
			int aft = v1[i+1];
			
			int pos1 = mp[crnt];
			int pos2 = mp[aft];
			if ( pos1 > pos2 ){
				ans++;
				v1[i] = aft;
				v1[i+1] = crnt;
			}

		}

		cout << ans  << '\n';


   }

   return 0;
}