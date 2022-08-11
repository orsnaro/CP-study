#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// const ll N = 1e5;
// int a[N],prefix[N]{0};

// greedy sheet prob F
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t ; cin >>t;
  while(t--){
    int n;cin >>n;
    string a,b; cin >> b;
    char prv= '#';
    for (char c :b){
      for(char d ='1';d>= '0';--d){
        if(c-'0'+d != prv ){
          prv=c - '0' +d;
          a+=d;
          break;
        }
      }
    } 
  
    cout <<a << '\n';
  }

  return 0;
}