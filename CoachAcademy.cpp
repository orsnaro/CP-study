#include <bits/stdc++.h>
#define fastio                                                                 \
  (ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL));
// backtacking   prob : F (didnt use backtracking)
using namespace std;
using ll = long long;

const int N = 1e5;
// ll x, target, cntr;

// int is_mul(int x, int cntr) {

// }

int main() {
  fastio;

  int target, n;

  while (true) {
  set <string , greater<string>> st;
    cin >> target >> n;
    int arr[N] = {0};
    if(!n)
      break;
      

    for (int i = 0; i < n; ++i)
      cin >> arr[i];

    cout << "Sums of " << target << ":\n";
    for (ll msk = 0; msk < (1ll << n*1ll); msk++) {
      int sum = 0;
      vector <int> vec;

      for (int i = 0; i < n; ++i) {
        if (msk & (1ll << i*1ll)) {
          sum += arr[i];
          vec.push_back(arr[i]);
        }
      }
      sort ( vec.begin() , vec.end() , greater<int>());
      if (sum == target) {
        string temp;
        for (int i = 0; i < vec.size(); ++i){
          if(i)
            temp.append("+");

          temp.append(to_string(vec[i]));
        }
        st.emplace(temp);

      }

    }
      if (st.empty())
        cout << "NONE\n";
      else{
        for(string x : st)
          cout << x << '\n';
      }

  }

  return 0;
}