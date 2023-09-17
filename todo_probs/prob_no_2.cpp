



// https://codeforces.com/contest/719/problem/B


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
const ll LM= LONG_LONG_MAX;
const int N = 2e5 + 5, M = INT32_MAX;
// int arr[N];

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio; // disable with 'printf() , scanf()'
   int t = 1;
   // cin >> t;
   while (t--) {
		int n; cin >> n;
		string line; cin >> line;
		pair<int , string> arr[4];
		arr[0] = {0 , "rodd"}; 
		arr[1] = {0 , "reven"}; 
		arr[2] = {0 , "bodd"}; 
		arr[3] = {0 , "beven"}; 
		

		int rcnt = 0 , bcnt = 0;
		char who_ev = line[0];
		char who_od;
		who_ev == 'r' ? who_od ='b' : who_od = 'r';

		
		bool is_prfct = true;
		for (int i = 0; i < n; i++){

			if(i % 2 != 0 and who_od != line[i])
				is_prfct = false;
			if(i % 2 == 0 and who_ev != line[i])
				is_prfct = false;

			if(line[i]=='r') rcnt++;
			else bcnt++;

			if ( line[i] == 'r' and i % 2 == 0 ) arr[1].F++;
			else if (line[i] == 'r') arr[0].F++;
			else if (line[i] == 'b' and i % 2 == 0) arr[3].F++;
			else if (line[i] == 'b' ) arr[2].F++;
		}

		if ( is_prfct ){
			cout << 0 << '\n';
			continue;
		}

		// sort(arr , arr + 4);
		// pair<int , string> mxp = {arr[0].F , arr[0].S};
		pair<int , string> mxp{-1 , ""};
		for (int i = 0; i < 4 - 1; i++){ 
			if (mxp.F < arr[i].F){
				mxp.F = arr[i].F;
				mxp.S = arr[i].S;
			}
		}


		int ans = 0;
		int hlf = n/2;
		
		int diff = max(bcnt , rcnt);
		bool inc_black = false;
		if ( (diff  - (n/2) <= 1 and n % 2 ==0)  or (diff - (n/2) < 1 and n % 2 == 0) ){ 
			diff = 0;
		}else {
			diff = diff - (n/2);
			bcnt < rcnt ? inc_black = true : inc_black = false;
			n % 2 == 0 ? diff = diff : diff --;
			ans += diff;//i need at least 'diff' coloring operations + min swaps
			if (inc_black){ // increase black 
				if(mxp.S == "beven" or mxp.S == "rodd"){//reven
					if ( arr[1].F >= diff ){
						arr[1].F -= diff;
						arr[3].F += diff;
						diff = 0;
					}else{
						//increase b_even  increases all black
						arr[3].F += arr[1].F;
						diff -= arr[1].F;
						arr[1].F = 0;

						//increase b_odd increases all black
						arr[2].F += diff;
						arr[0].F -= diff;
						diff = 0;
					}
				}else if(mxp.S == "bodd" or mxp.S == "reven"){//rodd 
					if ( arr[0].F >= diff ){
						arr[0].F -= diff;
						arr[2].F += diff;
						diff = 0;
					}else{
						//increase b_odd  increases all black
						arr[2].F += arr[0].F;
						diff -= arr[0].F;
						arr[0].F = 0;

						//increase b_even increases all black
						arr[3].F += diff;
						arr[1].F -= diff;
						diff = 0;
					}
				}

			}else{//inc red
				if(mxp.S == "reven" or mxp.S == "bodd"){//beven must take from it to reven if not enough take from it and bodd to rodd
					if ( arr[3].F >= diff ){
						arr[3].F -= diff;
						arr[1].F += diff;
						diff = 0;
					}else{
						//increase r_even  increases all red
						arr[1].F += arr[3].F;
						diff -= arr[3].F;
						arr[3].F = 0;

						//increase r_odd increases all read
						arr[0].F += diff;
						arr[2].F -= diff;
						diff = 0;
					}
				}else if(mxp.S == "rodd" or mxp.S == "beven"){//bodd 
					if ( arr[2].F >= diff ){
						arr[2].F -= diff;
						arr[0].F += diff;
						diff = 0;
					}else{
						//increase r_odd  increases all red
						arr[0].F += arr[2].F;
						diff -= arr[2].F;
						arr[2].F = 0;

						//increase r_even increases all red
						arr[1].F += diff;
						arr[3].F -= diff;
						diff = 0;
					}
				}
			}
		}

		// arr[0] = {0 , "rodd"}; 
		// arr[1] = {0 , "reven"}; 
		// arr[2] = {0 , "bodd"}; 
		// arr[3] = {0 , "beven"}; 
		//now find mxp and ans = diff + ( tot_cnt_color_mxp - mxp);

		mxp = {-1 , ""};
		bcnt = arr[2].F + arr[3].F;
		rcnt = arr[0].F + arr[1].F;
		for (int i = 0; i < 4 - 1; i++){ 
			if (mxp.F < arr[i].F){
				mxp.F = arr[i].F;
				mxp.S = arr[i].S;
			}else if ( mxp.F == arr[i].F){
				//get bigger  cnt
				if ( mxp.S[1] == 'r') {
					if (rcnt <= bcnt){//equal only if even n
						mxp.F = arr[i].F;
						mxp.S = arr[i].S;
					}
				}else{
					if (rcnt >= bcnt){
						mxp.F = arr[i].F;
						mxp.S = arr[i].S;
					}
				}
			}

		}
		
		if (mxp.S == "bodd" or mxp.S == "beven"){
			ans += bcnt - mxp.F;
			cout << ans << '\n'; 
		}else{
			ans += rcnt - mxp.F;
			cout << ans << '\n'; 
		}
   }
   return 0;
}