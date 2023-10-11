
// https://www.hackerrank.com/challenges/classes-objects/problem?isFullScreen=false











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

class Student{
	public: 
		int scores[5] {};
		void input(){
			for (size_t i = 0; i < 5; i++)
				cin >> this -> scores[i];
		}

		int calculateTotalScore(){
			int sm = 0;
			for ( auto &s : this -> scores )
				sm += s;

			return sm;
		}


};
int main(void) {
	// Txtio;
   fastio; // disable fastio when using 'printf() , scanf()'
   int t = 1;
   // cin >> t;
   while (t--) {
		Student a;
		a.input();
		cout << a.calculateTotalScore() << '\n';
		
	}


	return 0;  
}
