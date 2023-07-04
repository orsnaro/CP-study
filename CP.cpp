// prob: 
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
int arr[N];

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;
   int t = 1;
   // cin >> t;
	


   while (t--) {
		// pair <int , int> r , c , d;
		// cin >> r.F >> r.S >> c.F >> c.S >> d.F >> d.S;
		int loc[4] = {};
		map< pair<int,int> , painr<int,int> > trans;
		trans[{0 , 2}] = {0 , 0};
		trans[{2 , 0}] = {0 , 0};
		trans[{0 , 4}] = {0 , 0};
		trans[{4 , 0}] = {0 , 0};
		trans[{0 , 3}] = {0,1};
		trans[{3 , 0}] = {0,1};
		trans[{0 , 5}] = {0,1};
		trans[{5 , 0}] = {0,1};
		trans[{1 , 2}] = {1,0};
		trans[{2 , 1}] = {1,0};
		trans[{1 , 5}] = {1,0};
		trans[{5 , 1}] = {1,0};
		trans[{1 , 4}] = {1,1};
		trans[{4 , 1}] = {1,1};
		trans[{1 , 3}] = {1,1};
		trans[{3 , 1}] = {1,1};


		for (size_t i = 0; i < 6; i++) {
			cin >> arr[i];
			if (arr[i] == 1){
				cout << -1 << '\n';
				return 0;
			}
		}

		
		pair<int , int> mn , mn2 = {};
		int mnval , mnval2 = N;
		ans[2][2] ={};
		for (size_t i = 0; i < 6; i++)
		{
			bool flag = false;
			for (size_t j = 0; j < 6; j++)
			{

				if ( i % 2 != 0 and j == i + 1) continue;  //odd =   r1 r2 , c1 c2 , d1 d2 
				if ( arr[i] == arr[j] ) {
					cout << -1 << '\n';
					return 0;
				}

				if (arr[i] + arr[j] <= mnval) {
					mn2val = mnval;
					mn2 = mn;

					mnval = arr[i] + arr[j];
					mn = {i , j};

				}
			}

		}
		int i = trans{mn.F , mn.S}.F ;
		int j = trans{mn.F , mn.S}.S ;
		ans[i][j] = 1;
		int i2 = trans{mn2.F , mn2.S}.F ;
		int j2 = trans{mn2.F , mn2.S}.S ;

		if ( i == i2 and j != j2){
			int ri = min (mn.F , mn.S);
			ans[trans{mn2.F , mn2.S}] = arr[ri] - arr[i][j];

		}  //same row
		if ( i != i2 and j == j2){
			int ci = -1 ;
			if ( mn.F > 1 and mn.F < 4)
				int ci = 	mn.F;
			else 
				int ci = mn.S;
			
			ans[trans{mn2.F , mn2.S}] = arr[ci] - arr[i][j];

		}//same colm

		if ( i - i2 == j -j2){
			int di = max(mn.F , mn.S);
			ans[trans{mn2.F , mn2.S}] = arr[di] - arr[i][j];
		} //main diag{
			
		if (j - j2 != i - i2 ){
			int di = max(mn.F , mn.S);
			ans[trans{mn2.F , mn2.S}] = arr[di] - arr[i][j];
		} //anti diag


   }

   return 0;
}//done 