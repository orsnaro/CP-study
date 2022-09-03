#include <bits/stdc++.h>
#define fastio                                                                 \
  (ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL));
// backtacking   prob : H (didnt use backtracking)
using namespace std;
using ll = long long;

const int N = 12;
int arr[N] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
// ll x, target, cntr;

// int is_mul(int x, int cntr) {

// }
bool prime_find(int p) {
    for(int i = 2; i <= sqrt(p); i++)
        if(p % i == 0) return false;
    return true;
}

int main() {
  // fastio;

  int target, cntr = 0;
  while (scanf("%d",&target) != EOF) {
    vector<int> vec;
    for (int i = 0; i < target; ++i) 
      vec.push_back(i+1);
    

    cntr++;
    if (cntr >1)
      // cout<<'\n';
      printf("\n");

    printf("Case %d:\n",cntr);
    // cout << "Case " << cntr << ':' << '\n';
    for (int i = 0; ; ++i) {
      bool is_prime = 0;
      for (int j = 1; j < target; ++j) {
        int temp2 = vec[j - 1] + vec[j];
        is_prime = prime_find(temp2);
        if (!is_prime)
          break;
      }
      if (is_prime & prime_find(vec[target - 1] + vec[0])) {
        for (int i = 0 ; i < target; ++i){
          // cout << vec[i];
          printf ("%d",vec[i]);
          if(i+1 == target)
            break;
          // cout << ' ';
          printf (" ");
        }
        printf ("\n");
        // cout << '\n';
      }
      bool there_permutaion = next_permutation(vec.begin()+1, vec.end());
      if (!there_permutaion)
        break;
    }
  }
  return 0;
}