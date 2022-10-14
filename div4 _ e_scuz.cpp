// problem link : Codeforces Round #827 (Div. 4) : e
#include <bits/stdc++.h>
#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);

#define F first
#define S second
using namespace std;
using ll = long long int;
const int N = 1e6, M = 1e8;
ll arr[N];

int main() {
    // fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        int n, q;
        scanf("%d%d", &n, &q);
        // cin >> n >> q;
        fill(arr, arr + n, 0);
        vector<pair<int,int>> v;
        for (size_t i = 0; i < n; i++) {
            int tmp;
            scanf("%d", &tmp);
            // cin >> tmp;
            v.push_back({tmp ,i});
            if (i >= 1) 
                arr[i] = v[i].F + arr[i - 1];
            else 
                arr[0] = v[0].F;
        }
        sort(v.begin(), v.end());

        auto eitr = v.end();
        auto begin = v.begin();
        auto upper = v.end();
        int back = v.back().F;
        while (q--) {
            int tmp;
            scanf("%d",&tmp);
            // cin >> tmp;
            pair <int,int> p = {tmp , INT_MAX};
            auto test = upper_bound(v.begin(), v.end(), p);
            if (upper != eitr or (back == tmp and upper == eitr)) {
                auto indx = (test  -> second) - 1;
                printf("%lld ",arr[indx]);
                // cout << arr[indx] << ' ';
            }
        }
        printf("\n");
        // cout << '\n';
    }
    return 0;
}
