// sheet : genral 2 (13)  prob: C
#include <bits/stdc++.h>

#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);                                                         \
    4

using namespace std;
using ll = long long;

const int N = 1e6;
int arr[N];
struct athelete {
    int index;
    int races[5];

    bool operator<(const athelete &other) const {
        int cnt = 0;
        for (int i = 0; i < 5;
             ++i) { // sorting assending .back() is best athlete ;
            cnt += (races[i] >
                    other.races[i]); // higher placment means bad athelete means
                                     // goes to first when sorting
        }
        return cnt > 2; // if this ath is bad in 3 or more then he is bad than
                        // (other) then this comes before
    }
};

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<athelete> as(n);
        for (size_t i = 0; i < n; i++) {
            as[i].index = i + 1;
            for (size_t k = 0; k < 5; k++) 
                cin >> as[i].races[k];
            
        }
        sort(as.begin(), as.end());
        int ans = as.back().index;
        for (size_t i = 0; i + 1 < n; i++) 
            if ( not (as[i] < as.back())){
                ans = -1; 
                break;
            }
        cout << ans << '\n';

    }
    return 0;
}