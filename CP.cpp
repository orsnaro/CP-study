// prob: https://www.codechef.com/START95D/problems/TRANCHAIN
#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
   ios_base::sync_with_stdio(false);                                           \
   cin.tie(nullptr);                                                           \
   cout.tie(nullptr);
#define F first
#define S second
using ll = long long;
const int N = 1e6, M = 1e8;
string arr[N];

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;

   int t = 1;
   cin >> t;

   while (t--) {
		int freq[4] = {};
		int n; cin >> n; // 1 A 2 B 3 AB 4 O
		int sum = 0;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			if ( arr[i] == "A" ) freq[0]++;
			else if (arr[i] == "B") freq[1]++;
			else if (arr[i] == "AB") freq[2]++;
			else freq[3]++;
		}
		sum += freq[3] + max(freq[0] , freq[1]) + freq[2];
		cout << (sum == 0 ? 1 : sum ) << '\n'; 
   }

   return 0;
}