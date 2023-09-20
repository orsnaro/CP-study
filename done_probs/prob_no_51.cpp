// https://www.codechef.com/problems/OFFBY1
// tot time >5min ~



//#include <stdio.h>
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
int arr[N];

int main(void) {
	// Txtio;
   fastio; // disable fastio when using 'printf() , scanf()'
   int t = 1;
   cin >> t;
   while (t--) {
		double l , a , b; cin >> l >> a >> b;
		int t1 = ceil(l / a);
		int t2 = ceil(l / b);
		cout << ( (t1 - t2 - 1) > -1 ? t1 - t2 -1  : -1  )<< '\n';
   }     
	return 0;  
}
