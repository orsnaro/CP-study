// https://www.spoj.com/problems/AGGRCOW/

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
const int N = 2e5 + 5, M = INT_MAX;
// int arr[N];
bool ok(vector <int> arr , int c , int min){
	int crnt = arr[0];
	int sz = arr.size();
	
	int cnt = 1;
	for (int i = 1; i < sz ; i++)
	{
		if ( arr[i] -  crnt  >= min)
		{
			crnt = arr[i];
			cnt++;
		}

		if ( cnt == c )
			return true;
	}
	return false;
}

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio; // disable with 'printf() , scanf()'
   int t = 1;
   cin >> t;
   while (t--) {
		int n; cin >> n;
		int c; cin >> c;
		vector<int> arr;
		for (int i = 0; i < n; i++){
			int tmp; cin >> tmp;
			arr.push_back(tmp);
		}
		sort(arr.begin() , arr.end());
		
		if ( c == 2 ){
			cout << arr[n - 1] - arr[0] << '\n';
			break;
		}

		int ans = 1;
		int l = 1;//re-assure from input ranges
		int h = arr[n - 1] - arr[0];
		
		while ( l < h ){
			int m = (l + h + 1) / 2;
			
			if ( h - l <= 4){
				for (int i = l; i <= h; i++)
					if ( ok(arr , c , i) )
						ans = i;
				break;
			}

			if ( !ok(arr , c , m) ) h = m - 1;
			else{
				ans = m;
				l = m + 1;
			}
		}
		cout << ans << '\n';
   }
   return 0;
}