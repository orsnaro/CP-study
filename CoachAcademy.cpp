#include <bits\stdc++.h>

using namespace std;
using ll = long long;

// const int  N = 1e6;
// int arr[N];

//bitmasks  prob : a
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t ; cin >> t ;
	while(t--){
		int a,b,c=0; cin >> a >>b;
		c=a&b;
		cout << (a^c)+(b^c)<<'\n';
	}
	return 0;
} 