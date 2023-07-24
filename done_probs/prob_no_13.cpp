// https://codeforces.com/contest/1853/problem/A








#include <bits/stdc++.h>
// #include <stdio.h>
using namespace std;

#define fastio                                                                 \
   ios_base::sync_with_stdio(false);                                           \
   cin.tie(nullptr);                                                           \
   cout.tie(nullptr);

#define F first
#define S second
using ll = long long;
const ll LM= LONG_LONG_MAX;
const int N = 2e5 + 5, M = INT32_MAX;
// int arr[N];

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio; // disable with 'printf() , scanf()'
   int t = 1;
   cin >> t;
   while (t--) {
		int n; cin >> n;
		vector<int> v;
		bool is_sorted = true;
		int mn; cin >> mn;
		int mndiff = M;
		for (int i = 1; i < n; i++)
		{
			int tmp; cin >> tmp;
			if (mn > tmp){
				is_sorted = false;
			}

			mndiff = min ( mndiff , tmp - mn);
			mn = tmp;
			v.push_back(tmp);
		}
		
		if ( !is_sorted ){
			cout << 0 << '\n';
			continue;
		}
		if ( mndiff == 0 ){
			cout << 1 << '\n';
			continue;
		}

		mndiff = mndiff / 2 + 1;
		cout << mndiff << '\n';
   }
   return 0;
}