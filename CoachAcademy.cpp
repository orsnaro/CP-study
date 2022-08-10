#include <bits/stdc++.h>

using namespace std;

using ll = long long;
// const ll N = 1e5;
// int arr[N],prefix[N]{0};

// greedy sheet prob D 
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int x ; cin >> x;
  int sumpos=0, sumneg=0;

  for( int i=0 ; i<x ; ++i){
    int n ; cin >> n ;
    if(n < 0)
      sumneg+=n;
    else sumpos+=n;
  }   

  cout << sumpos - sumneg << '\n';
  
  return 0;
}