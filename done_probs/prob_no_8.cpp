// https://www.codechef.com/START99D/problems/CARDSWIPE





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
// int arr[N];

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;
   int t = 1;
   cin >> t;
   while (t--) {
		int n; cin >> n;
		bool arr[(2*N) + 1] = {}; // could make it char for faster reset
		int cnt = 0;
		int mx_cnt = 0;
		for (int i = 0; i < n; i++)
		{
			int tmp; cin >> tmp;
			arr[tmp] = !arr[tmp];
			if (arr[tmp] == true){11
				cnt ++;
			}else if ( arr[tmp] == false){
				cnt --;
			}

			mx_cnt = max ( mx_cnt , cnt);

		}
		cout << mx_cnt << '\n';
		


   }
   return 0;
}