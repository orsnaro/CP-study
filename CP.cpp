// prob: https://codeforces.com/contest/263/problem/A
#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
   ios_base::sync_with_stdio(false);                                           \
   cin.tie(nullptr);                                                           \
   cout.tie(nullptr);
#define F first
#define S second
using ll = long long;
const int N = 1e5, M = 1e8;
// int arr[N];
ll arr[2*N + 10];

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;
   int t = 1;
   // cin >> t;
	


   while (t--) {
		bool flag = false;
		int stps = 0;
		for (int i = 0; i < 5; i++){
			for (int j = 0; j < 5; j++)
			{
				int tmp; cin >> tmp; 
				if ( tmp == 1)
					stps += abs( j - 2 ) + abs( i - 2 );
			}
		}
		cout << stps << '\n';
			

   }

   return 0;
}