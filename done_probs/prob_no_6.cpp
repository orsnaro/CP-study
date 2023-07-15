// https://codeforces.com/contest/766/problem/B




#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
   ios_base::sync_with_stdio(false);                                           \
   cin.tie(nullptr);                                                           \
   cout.tie(nullptr);
#define F first
#define S second
using ll = long long;
const int N = 1e5 + 5, M = INT_MAX;
const ll LM= LONG_LONG_MAX;
// int arr[N];

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;
   int t = 1;
   // cin >> t;
   while (t--) {
		int n; cin >> n; 
		vector <ll> v;
		for (int i = 0; i < n; i++){
			ll tmp; cin >> tmp;
			v.push_back(tmp);
		}
		sort(v.begin() , v.end() , greater<int>());\
		bool found = false;
		for (int i = 0; i < n - 2; i++)
		{
			if( v[i] < v[i + 1] + v[i + 2]){
				found = true;
				break;
			}
		}
		cout << (found ? "YES" : "NO") << '\n';
   }

   return 0;
}