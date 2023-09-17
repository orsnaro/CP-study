// https://codeforces.com/contest/112/problem/A
  






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
int arr[N];

int main(void) {
	// Txtio;
   fastio; // disable fastio when using 'printf() , scanf()'
   int t = 1;
   // cin >> t;
   while (t--) {
		string a; cin >> a;
		string b; cin >> b;
		for (int i = 0; i < a.size(); i++)
		{
			a[i] = tolower(a[i]);
			b[i] = tolower(b[i]);
		}
		

		if ( a < b ) {  cout << "-1\n" ; break;}
		if ( a > b ) {  cout << "1\n" ; break;}
		if ( a == b ) {  cout << "0\n" ; break;}
   }     
	return 0;  
}
