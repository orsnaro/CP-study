//q1 hacerrank exam cp basic




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
const int N = 2e5 + 5, M = INT32_MAX;
// int arr[N];
/*
 * Complete the 'decryptPassword' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string decryptPassword(string s) {
	string ans;
	stack <char> stk;
	int cnt = 0;
	for ( auto &x : s)
		if ( x == '0') cnt++;
	
	for ( auto &x : s)
		if ( x > '9' or cnt == 0) break;
		else { stk.push(x); cnt--; }

	for (int i = 0; i < s.size();)
	{
		if ( s[i] >= 'A' and s[i] <= 'Z' and s[i+1] > 'Z'  and s[i+2] == '*' ){
			char tmp = s[i];
			s[i] = s[i+1];

			s[i+1] = tmp;
			s.erase(s.begin()+i+2);
	
			i += 2;
		}else if ( s[i] == '0' ){
			s[i] = stk.top();
			stk.pop();
			s.erase(s.begin());
			// i++;
		}else i++;
	}
	
	ans = s;
	return ans; //strnig
}

int main(void) {
	// Txtio;
   fastio; // disable fastio when using 'printf() , scanf()'
   int t = 1;
   // cin >> t;
   while (t--) {
		ofstream fout(getenv("OUTPUT_PATH"));

		string s;
		getline(cin, s);

		string result = decryptPassword(s);

		fout << result << "\n";

		fout.close();

	}


	return 0;  
}
