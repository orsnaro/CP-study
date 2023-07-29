// https://codeforces.com/contest/476/problem/B










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
		string s1; cin >> s1;
		string s2; cin >> s2;
		int cntp = 0;
		for (auto c : s1)c == '+' ? cntp++ : cntp=cntp;
			

		//mask 
		int msk = 0;
		int cntp2 = 0;
		for (int i = 0; i < s2.size() ; i++)
		{
			if(s2[i] == '?') msk |=  (1 << s2.size() - 1 - i);
			else{
				if(s2[i] == '+') cntp2++;
				msk &=  (~(1 << s2.size() - 1 - i));
			} 
				
		}
		int cnte = __builtin_popcount(msk);

		int good = 0;
		for (int smsk = msk; smsk; smsk = (smsk - 1) & msk )
		{
			int cnto = __builtin_popcount(smsk);
			if ( cnto + cntp2 == cntp ) good++;
		}
		int cnto = 0;
		if ( cnto + cntp2 == cntp ) good++;

		double ans = double(good) / double(pow(2, cnte));

		cout << fixed << setprecision(10) << (cnte == 0 ? (cntp2 == cntp ? double(1) : double(0) ): ans) << '\n';
		
   }
    return 0;  
	  
}