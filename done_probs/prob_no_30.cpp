


// https://codeforces.com/problemset/problem/1097/B
//done 3rd time but in recursive style (arround 10min total time!)









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
int arr[N];
bool ok = false;
int cnt = 0;
void bf ( int i , int sm , int n){
	if (cnt++ == pow(2,n) - 1) return;

	//base
	if ( i == n ){
		if(sm % 360 == 0) ok = true;
		return;
	}
	bf(i + 1 , sm + arr[i] , n);
	bf(i + 1 , sm - arr[i] , n);
}
int main(void) {
   // freopen("in.txt","r",stdin);
   fastio; // disable with 'printf() , scanf()'
   int t = 1;
   // cin >> t;
   while (t--) {
		int n; cin >> n;
		for (int i = 0; i < n; i++)cin >> arr[i];
		bf( 0 , 0 , n );
		cout << ( ok ? "YES" : "NO") << '\n';
   }     
	return 0;  
}

