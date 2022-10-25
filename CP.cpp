// PROB :https://codeforces.com/problemset/problem/372/A
#include <bits/stdc++.h>
#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);

#define F first
#define S second
using namespace std;
using ll = long long int;
const int N = 1e5, M = 1e8;
int arr[N];
vector<int> v;
int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while (t--) {
        int n, t;
        cin >> n >> t;
        for (int i = 0; i < n; ++i) {
            int tmp; cin >> tmp;
            v.push_back(tmp);
        }

        int cnt = 0 , j = 0 ,sum = 0;
        for ( int i = 0; i < n; ++i){
            sum += v[i];
            if ( sum <= t )
                cnt ++;
            else{
                sum -= v[j];
                j++;
            }
        
        } 
        cout << cnt << '\n';

    }
    return 0;
}
