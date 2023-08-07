
// https://codeforces.com/contest/1857/problem/C


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
// int arr[N];

int main(void) {
	// Txtio;
   fastio; // disable with 'printf() , scanf()'
   int t = 1;
   cin >> t;
   while (t--) {
		int n; cin >> n;
		int b = (n(n-1))/2;	
		map<int,int> mp;
		for (int i = 0; i < b; i++)
		{
			int tmp; cin >> tmp;
			mp[tmp]++;
		}
		auto bi = mp.begin()
		auto ei = mp.end()
		auto end = ei;
		end--;
		int j = 0;
		int big = 0;
		for (auto i = bi; i != ei; i++ , j++){
			mp[i->F] = min(1 , (i->S)-j);
			if (i == end){
				big = i->F;
			}
		}
		

		for (auto i = bi; i != ei; i++)
		{
			int cnt = i->S;
			auto j = i;
			j++;
			cout << i->F << ' ';
			while(i->S != 0)
			{
				if(j != ei){
					cout <<  <<' ';
				}
				mp[i->F]--;
			}

		}
		
		
		
   }     
	return 0;  
}

