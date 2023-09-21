// https://codeforces.com/contest/1873/problem/C
// time tot ~ 23min









// #include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define Txtio   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
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
	// Txtio;
   fastio; // disable fastio when using 'printf() , scanf()'
   int t = 1;
   cin >> t;
   while (t--) {
		int ans = 0;
		for (int i = 1; i <= 10; i++)
		{
			for (size_t j = 1; j <= 10; j++)
			{
				char tmp;
				cin >> tmp;
				if ( tmp == 'X'){
					int ti , tj;
					i > 5 ? ti = 10 - (i - 1) : ti = i;
					j > 5 ? tj = 10 - (j - 1) : tj = j;
					ans += min ( tj , ti );
				}
			}
			
		}
		cout << ans << '\n';

	}     
	return 0;  
}