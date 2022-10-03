// sheet : 9  prob: I
#include <bits/stdc++.h>
#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);

#define F first
#define S second
using namespace std;
using ll = long long int;
const int N = 1e6, M = 1e7;
// int arr[N];
bitset<M> prime;
void seive() {
    prime[0] = 1; // 1 is not prime 0 is

    for (size_t i = 2; i <= 1200 / i; i++) {
        if (!prime[i])
            for (size_t j = i * i; j <= 1200; j += i)
                prime[j] = 1;
    }
    return;
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    string tmp;
    seive();
    while (true) {
        cin >> tmp;
        if (cin.eof()) break;

        int sz = tmp.size(), sum = 0;
        for (size_t i = 0; i < sz; i++) {
            if ((int)tmp[i] > 96)
                sum += ((int)tmp[i] - 96);
            else 
                sum += ((int)tmp[i] - 38);
        }
        bool is_prime = prime[sum]; // WE ASSUME 1 IS NOT PRIME SO PRIME[1] = 1;
        if (!is_prime)
            cout << "It is a prime word.\n";
        else
            cout << "It is not a prime word.\n";
    }
    return 0;
}
