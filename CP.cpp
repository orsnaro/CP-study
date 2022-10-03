// sheet : 5  prob: E 
#include <bits/stdc++.h>
#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);

#define F first
#define S second
using namespace std;
using ll = long long;
const int N = 1e6, M = 1e7;
int arr[N], cnt[N];
ll tot[N];
pair<pair<int, int>, int> op[N];

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k; // arr size = n , op num = m , query num =k
        for (size_t i = 1; i <= n; i++)
            cin >> arr[i];
        for (size_t i = 1; i <= m; i++)
            cin >> op[i].F.F >> op[i].F.S >> op[i].S;

        for (size_t i = 0; i < k; i++) { // partial sum on opertation freq
            int x, y;
            cin >> x >> y;
            ++cnt[x];
            --cnt[y + 1];
        }

        for (size_t i = 1; i <= m;i++)
        { // prefix sum on op freq 'cnt' + partial sum on final sum to
                    // main arr
            cnt[i] += cnt[i - 1];
            tot[op[i].F.F] += 1ll * op[i].S * cnt[i];
            tot[op[i].F.S + 1] -= 1ll * op[i].S * cnt[i];
        }

        for (size_t i = 1; i <= n; i++)
        { // prefix sum  on tot[N] + cout final arr[n]
            tot[i] += tot[i - 1];
            cout << arr[i] + tot[i] << ' ';
        }
    }

    return 0;
}
