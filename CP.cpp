// prob: https://codeforces.com/contest/1843/problem/A (joined last 24)
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
int arr[N];

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;

   int t = 1;
   cin >> t;

   while (t--) {
		int sum = 0;
      int n;
      cin >> n;
      for (int i = 0; i < n; i++) {
	 		int temp;
			cin >> temp;
	 		arr[i] = temp;
      }
		sort(arr , arr + n);
		for(int i = 0; i < ( n - i - 1) ; i++)
			sum += arr[n - i - 1] - arr[i];
		cout << sum << '\n';
   }

   return 0;
}