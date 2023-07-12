

// https://www.codechef.com/START98D/problems/BLDST



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

 auto comp = [](const vector<int>& v1, const vector<int>& v2) {
    return v1.size() < v2.size();
  };



int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;
   int t = 1;
   cin >> t;
   while (t--) {
		int n , m; cin >> n >> m;
		// multiset < pair< int ,  vector<int> > > st; // pair.f is sz of box
		vector < vector <int> > v;
		int arrm[m + 5] = {};
		// int freq[n] = {};

		int all = 0;
		for (int  i = 0; i < m; i++){
			cin >> arrm[i];
			all += arrm[i];
		}
		for (int  i = 0; i < n; i++){
			vector <int> tmp;
			v.push_back(tmp);
		}
		// st.insert({i , vector <int>(m , 0)});
		
		sort(arrm , arrm + m);
		for (int j = 0; j < m; j++)
		{
				for (int i = 0; i < n; i++){
					if ( arrm[j] == 0)
						break;
					v[i].push_back(j);
					arrm[j]--;
					// freq[i]++;
				}
				sort(v.begin(), v.end(), comp);
		}

		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			if (v[i].size() == m)
				ans++;
		}
		cout << ans;

   }

   return 0;
}