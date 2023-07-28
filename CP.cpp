
// https://codeforces.com/contest/1237/problem/A

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
using ull = unsigned long long;
const ll LM = LONG_LONG_MAX;
const int N = 2e5 + 5, M = INT32_MAX;
// int arr[N];

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio; // disable with 'printf() , scanf()'
   int t = 1;
   // cin >> t;
   while (t--) {
		int n; cin >> n;
		queue <pair<int,int>> qodd; //1 pos 0neg  all non-neg floor all neg ceil;
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			double tmp; cin >> tmp;
			if(int(tmp) % 2 == 0){
				ans += tmp/2;
				qodd.push({-1 , tmp/2});
			}else{
				// tmp >= 0 ? (qodd.push( {1 , floor(tmp/2)} ) : qodd.push( {0,ceil(tmp/2)} );
				if (tmp >= 0){
					qodd.push( {1 , floor(tmp/2)} ); 
					ans += floor(tmp/2);
				}else{
					qodd.push( {0 , floor(tmp/2)} );
					ans += floor(tmp/2);
				}
			}
		}
		while(ans != 0){
			if ( qodd.front().F == 1){
				cout << qodd.front().S + 1 << '\n';
				ans++;
			}else if ( qodd.front().F == 0){
				cout << qodd.front().S + 1 << '\n';
				ans++;
			}else{
				cout << qodd.front().S << '\n';
			}
			qodd.pop();
		}
		while(!qodd.empty()){
			cout << qodd.front().S << '\n';
			qodd.pop();
		}
   }
   return 0;
}