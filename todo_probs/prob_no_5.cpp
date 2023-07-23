

// https://codeforces.com/contest/1850/problem/E
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
const int N = 2e5 + 5, M = INT_MAX;
const ll LM= LONG_LONG_MAX;
// int arr[N];
ll solve ( ll a , ll b  , ll c){
    ll discriminant = b*b - 4*a*c;
    double x1 = 0;
	 double x2 = 0;
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
		  return (x1 > x2 ? x1 : x2);
        
    }
    
    else if (discriminant == 0) {
        x1 = -b/(2*a);
		  return x1;
    }

    
}

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio; // disable when using 'printf() , scanf()'
   int t = 1;
   cin >> t;
   while (t--) {
		int n; cin >> n;
		ll c; cin >> c;
		ll p_sum = 0;
		ll sqrt_sum = 0;
		for (int i = 0; i < n; i++)
		{
			ll tmp; cin >> tmp;
			p_sum += tmp;
			sqrt_sum += sqrt(tmp);
		}
		ll a = 4*n;
		ll C = p_sum - c;
		ll b = 4 * sqrt_sum;
		ll ans = solve ( a, b, C);
		cout << ans << '\n';


   }
   return 0;
}