


// https://codeforces.com/contest/416/problem/C


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

bool comp(const pair<pair<int ,int>,int>  &a , const pair<pair<int ,int>,int> &b )  { // (sz , money), indx
	if ( a.F.S != b.F.S)
		return a.F.S > b.F.S; //order desc on money
	else
		return a.F.F < b.F.F; // order asec on sz -> we need smaller size higher money first
}
bool comp2 ( const pair<int,int> &a , const int &b ){
	return a.F < b;
}

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;
   int t = 1;
   // cin >> t;
   while (t--) {
		int n; cin >> n; 
		vector < pair<pair<int,int> , int> > v;
		for (int i = 0; i < n; i++){
			int x , y ; cin >> x >> y;
			v.push_back({ {x,y} , i});
		}

		int k; cin >> k;
		vector <pair<int , int>> dq; // sz , indx
		for (int  i = 0; i < k; i++){
			int tmp; cin >> tmp;
			dq.push_back({ tmp , i });
		}

		sort( v.begin() , v.end() , comp );
		sort( dq.begin() , dq.end() );

		int req  = 0;
		int cash = 0;
		queue <pair<int , int>> q; // store answer
		for (int i = 0; i < n and !dq.empty() ; i++){
			auto res = lower_bound( dq.begin() , dq.end() , v[i].F.F , comp2);
			if ( res != dq.end() ){
				req ++;
				cash += v[i].F.S;
				q.push({ v[i].S , (*res).S + 1 });
				dq.erase(res); // may add bool is taken to dq instead 
			}
		}

		cout << req << ' ' << cash << '\n';
		while ( !q.empty() ){
			cout << q.front().F + 1 << ' ' << q.front().S << '\n';
			q.pop();
		}

		//NOTE: indxes are one based AND YOURS are 0 based
		

   }

   return 0;
}