// https://codeforces.com/contest/437/problem/B








// #include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define fastio                                                                 \
   ios_base::sync_with_stdio(false);                                           \
   cin.tie(nullptr);                                                           \
   cout.tie(nullptr);

#define F first
#define S second
using ll = long long;
using ull = unsigned long long;
const ll LM = LONG_LONG_MAX;
const int N = 2e6 + 5, M = INT32_MAX;
// int arr[N];

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio; // disable with 'printf() , scanf()'
   int t = 1;
   // cin >> t;
   while (t--) {
		int s , l; cin >> s >> l;
		int ods = ( l & 1 == 1 ? (l/2 + 1) : (l/2) );
		unordered_map <int , stack<int>> mp;

		for (int i = l; i > 0; i--)
		{	
			if ( i & 1 == 1 ) continue;

			int tmp = i & (~(i-1));
			mp[tmp].push(i);
		}
		vector<int> v;
		vector<pair<int, stack<int>>> arr(mp.begin() , mp.end());
	  	sort(arr.begin(), arr.end(), [](const auto& a, const auto& b) { return a.first > b.first;});
       

		bool ok = false;
		int sz = arr.size();
		for (int i = 0; i < sz ; i++)
		{
			while(!arr[i].S.empty()){
				int res = s - arr[i].F;
				if ( res == 0 ){
					ok = 1;
					v.push_back(arr[i].S.top());
					s -= arr[i].F;
					break;
				}else if ( res < 0 ){
					break;
				}else if ( res > 0){
					if ( res <= ods ){
						ok = 1;
						v.push_back(arr[i].S.top());
						s -= arr[i].F;
						break;
					}
					s -= arr[i].F;
					v.push_back(arr[i].S.top());
					arr[i].S.pop();
				}
			}
			if ( ok ) break;
		}

		if ( s <= 0 or s > ods ){ cout << -1 << '\n'; continue; }

		cout << v.size() +  s << '\n';

		int i = 1;
		while(s--){
			v.push_back(i);
			i += 2;
		}
		for(auto x : v)
			cout << x << ' ';
   }     
	return 0;  
}


