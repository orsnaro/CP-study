

// https://codeforces.com/contest/1851/problem/C


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
int arr[N];

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio; // disable with 'printf() , scanf()'
   int t = 1;
   cin >> t;
   while (t--) {
		int n , k ; cin >> n >> k;
		vector<pair<int,int>> freq1;
		vector<pair<int,int>> freq2;


		int fstclr = -1;
		int cnt1 = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			fstclr = arr[0];
			if (arr[i] == fstclr){
				cnt1++;
				freq1.push_back({i , cnt1});
			} 
		}

		if (k == 1){ cout << "YES" << '\n'; continue; }

		int lstclr = arr[n-1];
		//if lstclr == fstclr TODO
		bool ok = false;
		if ( lstclr == fstclr ){
			while( cnt1 != 0){
				if ( cnt1 % k == 0){
					cout << "YES" << '\n';
					ok = true;
					break;
				}
				cnt1--;
			}
			if ( ok)cout << "YES" << '\n';
			if (!ok)cout << "NO"  << '\n';
			continue;
		}


		int cnt2 = 0;
		for (int i = 0; i < n; i++){
			if ( arr[i] == lstclr ){
				cnt2++;
				freq2.push_back({i , cnt2});
			} 
		} 


		bool can1 = false;
		int ind1 = -1;
		for (int i = 1; i <= cnt1 ; i++)
		{
			if ( i % k == 0){
				can1 = true;
				ind1 = freq1[i - 1].F;
				break;
			}
		}
		
		bool can2 = false;
		int ind2 = -1;
		for (int i = 1; i <= cnt2; i++)
		{
			if ( i % k == 0){
				if (ind1 < freq2[cnt2 - i].F){
					can2 = true;
					ind2 = freq2[cnt2 - i].F;
					break;
				}
			}
		}
		

		cout << (can1 and can2 ? "YES" : "NO") << '\n';
   }
   return 0;
}