

// https://codeforces.com/contest/1848/problem/B

#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
   ios_base::sync_with_stdio(false);                                           \
   cin.tie(nullptr);                                                           \
   cout.tie(nullptr);
#define F first
#define S second
using ll = long long;
const int N = 1e5 + 5, M = INT_MAX;
const ll LM= LONG_LONG_MAX;


bool comp (  pair< pair<int,int>,pair<int, int> > &a , pair< pair<int,int> , pair<int,int> > &b){
	if ( a.F.S != b.F.S ){
		return a.F.S < b.F.S;
	}else{
		return a.S.S < b.S.S;
	}
}

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;
   int t = 1;
   cin >> t;
   while (t--) {
		int n , k; cin >> n >> k;
		vector < pair<pair<int , int> , pair<int , int >> >v(k + 5) ;//one based pos //(lst_pos , mx_stp) , (2ndmax_stp ,mx_stp_freq)
		fill( v.begin(), v.end(), make_pair(make_pair(0, -1), make_pair(-1, 0)) );
		int arr[ N * 3] = {};

		bool non = true;
		for (int i = 1; i < n + 1; i++)
		{
			int tmp; cin >> tmp;
			arr[tmp]++;
			
			if ( v[tmp].F.F != 0 ){
				non = false;
				int stp = i - v[tmp].F.F - 1;
				if ( v[tmp].F.S == stp )
					v[tmp].S.S ++;
				else{
					if (max(v[tmp].F.S , stp) == stp){
						v[tmp].S.S = 1;
						v[tmp].S.F = v[tmp].F.S;
						v[tmp].F.S = stp;
					}
				}
				v[tmp].F.F = i;
			}else{
				v[tmp].F.F = i;
				v[tmp].F.S = v[tmp].F.F - 1;
				v[tmp].S.S ++;
			}
		}

		if (non) {
			cout << (n / 2) - 1 << '\n';
			continue;
		}

		int ans = M;
		for (int i = 1; i < k + 1; i++){
			if(v[i].F.F != n and v[i].F.F != 0 ){
				int stp = n - v[i].F.F - 1;
				if ( v[i].F.S == stp )
					v[i].S.S ++;
				else{
					if (max(v[i].F.S , stp) == stp){
						v[i].S.S = 1;
						v[i].S.F = v[i].F.S;
						v[i].F.S = stp;
					}
				}
				v[i].F.F = n;
			}

			if ( v[i].S.S == 1 and v[i].F.F != 0)
				(v[i].F.S / 2) > v[i].S.F ? (v[i].F.S /= 2) : (v[i].F.S = v[i].S.F);
			if (v[i].F.F != 0 and v[i].F.S != -1){
				if ( v[i].F.S != 0 or ( v[i].F.S == 0 and (arr[i] >= n - 1) ) )
					ans = min( ans , v[i].F.S );
			}
		}
		cout << ans << '\n';
   }
   return 0;
}