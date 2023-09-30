// https://codeforces.com/contest/1875/problem/B





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
const int N = 2e5 + 5, M = INT32_MAX;
// int arr[N];

int main(void) {
	// Txtio;
   fastio; // disable fastio when using 'printf() , scanf()'
   int t = 1;
   cin >> t;
   while (t--) {
		int n , m , k; cin >> n >> m >> k;
		int mmx = -1;
		int mmn = M ;
		vector <int> mxj;
 		vector <int> mxg;

		ll smj = 0;
		for (int i = 0; i < n; i++)
		{
			int tmp;
			cin >> tmp;
			smj += tmp;
			mmx = max(mmx, tmp);
			mmn = min(mmn, tmp);
			mxj.push_back(tmp);
		}
		for (int i = 0; i < m; i++)
		{
			int tmp;
			cin >> tmp;
			mmx = max(mmx, tmp);
			mmn = min(mmn, tmp);
			mxg.push_back(tmp);
		}
		sort(mxj.begin() , mxj.end());
		sort(mxg.begin() , mxg.end());
		if (k == 1){
			if (mxj[0] > mxg[m-1]){
				cout << smj << '\n';
			}else{
				cout << smj + mxg[m-1] - mxj[0] << '\n';
			}
		}else if ( k == 2){
			cout << smj - mxj[n-1] + mxg[0] << '\n';
		}else if ( !(k & 1) and mxj[0] > mxg[m-1] ){//k is even: jelly DONT play last round
			smj = smj - mxj[n-1] + mxg[0];
			cout << smj << '\n';
		}else if ( !(k & 1) and mxj[0] <= mxg[m-1] ){//k is even: jelly DONT play last round
			int i = 1; //simulate 1 round only  
			while ( i-- ){
				smj -= mxj[0];
				int mn1 = mxj[0];
				mxj.erase(mxj.begin());
				mxg.push_back(mn1);

				smj += mxg[m-1];
				int mx2 = mxg[m-1];
				mxg.pop_back();
				mxj.push_back(mx2);
			}
			smj = smj - mmx + mmn;
			cout << smj << '\n';
		}else if ( (k & 1) and mxj[0] > mxg[m-1]){// k is odd: Gelly DONT play last round
			// smj = smj + mmx - mmn;
			cout << smj << '\n';
		}else if ( (k & 1) and mxj[0] <= mxg[m-1]){//k is odd: Gelly DONT play last round
			int i = 1; //simulate 1 round only  
			while ( i-- ){
				smj -= mxj[0];
				int mn1 = mxj[0];
				mxj.erase(mxj.begin());
				mxg.push_back(mn1);

				smj += mxg[m-1];
				int mx2 = mxg[m-1];
				mxg.pop_back();
				mxj.push_back(mx2);
			}
			// smj = smj + mmx - mmn;
			cout << smj << '\n';
		}
	}


	return 0;  
}
