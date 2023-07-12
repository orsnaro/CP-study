// https://www.codechef.com/START98D/problems/BLAST3 (NOT COMPLETED)



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



int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;
   int t = 1;
   cin >> t;
   while (t--) {
		int n; cin >> n;
		string s; cin >> s;

		if ( s.size() % 2 == 0){
			int half = s.size() / 2 ;
			string s1 = s.substr(0, half);
			stringg s2 = s.substr(half , half);
			if ( s1 == s2 ) {cout << "YES"; continue;}
			else{
				if (s.size() <= 3){cout << "NO"; continue;}

			}
		}else{
			int half = s.size() / 2 ;
			string s1 = s.substr(0, half);
			string s2 = s.substr(half + 1 , half);

			if ( s1 == s2){cout << "YES"; continue;}
			else{
				if (s.size() <= 3){cout << "NO"; continue;}
			}
		}
		
		
   }

   return 0;
}