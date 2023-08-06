





// https://codeforces.com/contest/1856/problem/A

// 5m read - 12 m think - 7m code - 1 m debug - alone - 1st submit










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
   cin >> t;
   while (t--) {
		int n; cin >> n;
		int arr[n];
		int arr2[n];
		for (int i = 0; i < n; i++){
			int tmp; cin >> tmp;
			arr[i] = tmp;
			arr2[i] = tmp;
		}
		sort(arr , arr + n , greater<int>());
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] != arr2[n - 1 - i]){
				ans = arr[i];
				break;
			}
		}
		cout << ans << '\n';
   }     
	return 0;  
}

