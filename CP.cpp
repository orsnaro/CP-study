// PROB : https://codeforces.com/contest/670/problem/D1
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
int arr[N], arrb[N];

bool is_valid(int x, int k , int n) {
    ll tmp = k;
    for (int i = 0; i < n; i++) {
        ll need = 1ll * arr[i] * x;
        if (need > arrb[i]) {
            tmp -= (1ll * need - arrb[i]);
        }
        if (tmp < 0)
            return false;
    }
        return true;
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        for (size_t i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (size_t i = 0; i < n; i++) {
            cin >> arrb[i];
        }

        int ans = 0;
        int l = 1, h = 2e9 + 1; // 'l' will store low bound and ans also
        while (l <= h) {         // binary search on max answer
            int md = (1ll * l + h) / 2 ;
            if (is_valid(md, k, n)){
                ans = md;
                l = md + 1;
            }
            else
                h = md - 1;
        }
        cout << ans << '\n';
    }
    return 0;
}
