// prob: https://www.codechef.com/START95D/problems/ALTTAB
#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
   ios_base::sync_with_stdio(false);                                           \
   cin.tie(nullptr);                                                           \
   cout.tie(nullptr);
#define F first
#define S second
using ll = long long;
const int N = 1e6, M = 1e8;
int arr[N];
vector<string> v;

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;

   int t = 1;
   // cin >> t;

   while (t--) {
		
		int n; cin >> n;
		for (int i = 0; i < n; i++){
			string tmp; cin >> tmp;
			int sz = tmp.size();
			tmp = tmp.substr(sz - 2 , 2);

			auto pos = find(v.begin() , v.end() , tmp);
			if ( pos != v.end() )
				v.erase(pos);
			v.push_back(tmp);
		}
		reverse(v.begin() , v.end());
		for( auto &x : v)
			cout << x;
   }

   return 0;
}