
// https://codeforces.com/contest/1856/problem/A

//done for 2nd time (but now using binary search!)(to improve my bs skill..)








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
bool sorted(int tr , int n){
	int arr2[n];
	for (int  i = 0; i < n; i++)
		arr2[i] = max(0 , arr[i] - tr);

	
	return is_sorted(arr2 , arr2 + n);
}
int main(void) {
   // freopen("in.txt","r",stdin);
   fastio; // disable with 'printf() , scanf()'
   int t = 1;
   cin >> t;
   while (t--) {
		int mn = M;
		int mx = 0;
		int n; cin >> n;
		bool ok = true;

		cin >> arr[0];
		mn = min(mn , arr[0]);
		mx = max(mx , arr[0]);
		for (int i = 1; i < n; i++){
			cin >> arr[i];
			if ( arr[i] < arr[i-1] ) ok = false;
			mn = min(mn , arr[i]);
			mx = max(mx , arr[i]);
		}

		if(ok){ cout << 0 << '\n'; continue;}

		int l = mn;//bs on first true
		int h = mx;//can improve range by making it only element in arr but sorted.
		ll m = (l + h + 1)/2;
		while ( l <= h ){
			m = (l + h + 1)/2;
			if(sorted(m , n)){
				h = m - 1;
			}else{
				l = m + 1 ;
			}

		}
		cout << l << '\n';
		
   }     
	return 0;  
}

