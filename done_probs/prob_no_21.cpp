

// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1285







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
using ull = unsigned long long;
const ll LM = LONG_LONG_MAX;
const int N = 2e6 + 5, M = INT32_MAX;
int arr[N];
vector<int>in(5 ,0);
vector<bool>vis(5 , 0);
bool found = false;
bool can( int i  , int n, bool first){//i max is 4

	if ( found ) return true;

	//base
	if ( i == 5 ){
		//calc your sum if not equal return true if false continue
		if (n == 23) {
			found = true;
			return true;
		}
		else return false;
	} 

	for(int j = 0; j < 5; j++){//j for current number not pos

		if ( vis[j] ) continue;

		vis[j] = true;

		if (first){
			if (can(i + 1 , in[j] ,0)) return true;

		}else{
			if (can(i + 1 , n + in[j] , 0)) return true;
			if (can(i + 1 , n * in[j] , 0)) return true;
			if (can(i + 1 , n - in[j] , 0)) return true;
		}

		vis[j] = false;
	}
	return false;
}


int main(void) {
   // freopen("in.txt","r",stdin);
   fastio; // disable with 'printf() , scanf()'
   int t = 1;
   // cin >> t;
   while (1) {
		bool stop = true;
		vis[0] = 0;
		vis[1] = 0;
		vis[2] = 0;
		vis[3] = 0;
		vis[4] = 0;
			
		for (int i = 0; i < 5; i++)
		{
			cin >> in[i];
			if (in[i]) stop = false; 
		}
		
		if( stop ) break;

		found = false;
		bool ok = can(0 , 0, 1);
		cout << (ok ? "Possible" : "Impossible") << '\n';
   }     
	return 0;  
}


// //IF USED iterative style with next_permutaion() (TLE)

// // https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1285

// #include <bits/stdc++.h>
// using namespace std;

// #define fastio                                                                 \
//    ios_base::sync_with_stdio(false);                                           \
//    cin.tie(nullptr);                                                           \
//    cout.tie(nullptr);

// #define F first
// #define S second
// using ll = long long;
// using ull = unsigned long long;
// const ll LM = LONG_LONG_MAX;
// const int N = 2e6 + 5, M = INT32_MAX;
// int arr[N];
// vector<int> in;
// bool tryp ( const vector<int> v , string c , int i ){
// 	//base 
// 	if ( i >= 4 ){
// 		ll sm = v[0];
// 		for (int j = 0; j < 4; j++){
// 			if(c[j] == '*') sm *= v[j + 1];
// 			if(c[j] == '+') sm += v[j + 1];
// 			if(c[j] == '-')	sm -= v[j + 1];
// 		}
// 		if (sm == 23) return true;
// 		else return false;
// 	}

// 	if(tryp(v , c + '*' , i + 1)) return true;//state
// 	if(tryp(v , c + '+' , i + 1)) return true;//state
// 	if(tryp(v , c + '-' , i + 1)) return true;//state

// 	return false;
// }
// int main(void) {
//    // freopen("in.txt","r",stdin);
//    fastio; // disable with 'printf() , scanf()'
//    int t = 1;
//    // cin >> t;
//    while (1) {
// 		bool stop = true;
// 		for (int i = 0; i < 5; i++)
// 		{
// 			int tmp; cin >> tmp;
// 			if (tmp) stop = false; 
// 			in.push_back(tmp);
// 		}
		
// 		if( stop ) break;
// 		auto ib = in.begin();
// 		auto ie = in.end();
// 		sort( ib , ie);
// 		bool ok = false;
// 		while ( next_permutation ( ib , ie ) )
// 			if ( tryp(in , "" , 0) ){
// 				ok = true;
// 				break;
// 			}
		

// 		in.clear();
// 		cout << (ok ? "Possible" : "Impossible") << '\n';
//    }     
// 	return 0;  
// }
