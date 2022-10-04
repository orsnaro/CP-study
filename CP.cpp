// sheet : 9  prob: G
#include <bits/stdc++.h>
#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);

#define F first
#define S second
using namespace std;
using ll = long long int;
const int N = 1e6 + 30, M = 1e7;
int spf [N];
int arr[N];

void seive(){
    for (size_t i = 0; i < N; i++){
        spf[i] = i;
        if ( !(i & 1) )
            spf[i] = 2;
    }
    
    for (size_t i = 3; i < N / i; i++){
        if ( spf[i] == i ){
            for (ll j = 1ll * i * i; j < N; j += i)
                if ( spf[j] == j )
                    spf [j] = i;
        }
    }
    
    return;
}

int  do_fact( int x ){
    fill ( arr ,arr + N ,0);
    int mxspf = -1 ;
    while ( x != 1){
        mxspf = max ( mxspf , spf[x]);
        arr[spf[x]]++;
        x = x / spf[x];
    }   

    int cnt = 1;
    for  (int i = 0; i <= mxspf ; ++i)
        cnt *= (arr[i] + 1) ;
    
    return cnt;
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    seive();
    while (t--) {
        ll sum = 0;
        int  a,b,c; cin >> a >> b >> c;
        for (size_t ai = 1; ai <= a; ai++)
            for (size_t bi = 1; bi <= b; bi++)
                for (size_t ci = 1; ci <= c; ci++){
                    int tmp = ai * bi * ci;
                    sum += do_fact(tmp);
                }
        ll ans = sum % 1073741824;
        cout << ans << '\n';
    }
    return 0;
}
