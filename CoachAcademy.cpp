// sheet : genral 2 (13)  prob: C
#include <bits/stdc++.h>

#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);4


using namespace std;
using ll = long long;

const int N = 1e6;
int arr[N];
typedef pair<int,int> pa;

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        priority_queue <pa, vector <pa>, greater<pa>> pq1,pq2,pq3,pq4,pq5;
        unordered_map<int, int> cntmp;

        int n;
        cin >> n;
        for (size_t i = 0; i < n; i++) {
            for (size_t j = 0; j < 5; j++) {
                int tmp;
                cin >> tmp;

                if (j == 0)
                    pq1.push({tmp, i + 1});
                else if (j == 1)
                    pq2.push({tmp, i + 1});
                else if (j == 2)
                    pq3.push({tmp, i + 1});
                else if (j == 3)
                    pq4.push({tmp, i + 1});
                else if (j == 4)
                    pq5.push({tmp, i + 1});
            }
        }

        for (size_t i = 0; i < 5; i++) {
            pair <int,int> tmp;
            if (i == 0){
                tmp = pq1.top();
                cntmp[tmp.second] = 1;
            }
            else if (i == 1){
                tmp = pq2.top();
                cntmp[tmp.second] ++;
            }
            else if (i == 2){
                tmp = pq3.top();
                cntmp[tmp.second] ++;
            }
            else if (i == 3){
                tmp = pq4.top();
                cntmp[tmp.second] ++;
            }
            else if (i == 4){
                tmp = pq5.top();
                cntmp[tmp.second] ++;
            }
        }

        pair<int,int> mx({-1,-1});
        for ( auto &x : cntmp) 
            if ( mx.second < x.second and x.second >= 3)
                mx = x; 
            else continue;
            
        cout << mx.first << '\n';
    }
    return 0;
}