// sheet : 9  prob: E
#include <bits/stdc++.h>
#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);

#define F first
#define S second
using namespace std;
using ll = long long int;
const int N = 1e8 + 3, M = 1e7;
bool prime[N];
void seive(){
    prime[0] = prime[1] = 1; 

    
    for (int i = 2; i <= N / i; ++i)
        if (!prime[i]){
            for ( ll j = 1ll * i * i; j <= N; j += i )
                prime[j] = 1; 
        }else continue;

    return;           
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    seive();
    while (t--) {
        int cnt = 0; 
        for (int i = 2; i < N; i++){
            if (prime[i])
                continue;
            
            ++cnt;
            if ( cnt % 100 == 1)
                cout << i << '\n';
        }
        
    }
    return 0;
}
