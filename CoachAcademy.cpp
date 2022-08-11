#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int  N = 1e6;
int arr[N]{0};

//sheet static range query prob : A
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin.tie(nullptr);
  cout.tie(nullptr);

  string s ;
  cin >> s;
  int sz=s.size();
  arr[sz]=' ';
  for(int i=1; i<=sz; ++i){
    if(s[i-1]==s[i])
      arr[i]=arr[i-1]+1;
    else
      arr[i]+=arr[i-1];
  }

  int n ;cin>> n ;
  while(n--){
    int  a,b ; cin >> a >> b;
    cout << arr[b-1]-arr[a-1]<<'\n';
  }

  return 0;
}