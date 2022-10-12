// sheet : sort 1  prob: G
#include <bits/stdc++.h>
#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);

#define F first
#define S second
using namespace std;
using ll = long long int;
const int N = 1e6 + 5, M = 1e8;
int arr[N];

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        for (size_t i = 0; i < n; i++) {
            pair<int, int> tmp;
            cin >> tmp.F >> tmp.S;
            v.push_back({tmp.F, tmp.S});
        }
        sort(v.begin(), v.end());
        int ans = -1;
        for (size_t i = 0; i < n; i++) {
            int a ,b ;
            tie ( a , b) = v[i]; // put a in v.F  b in v.S;
            if ( ans <= b)
                ans = b;
            else 
                ans = a;
        }
        cout << ans << '\n';
    }
    return 0;
}
