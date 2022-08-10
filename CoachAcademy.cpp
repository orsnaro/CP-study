#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// const ll N = 1e5;
// int arr[N],prefix[N]{0};

// greedy sheet prob H 
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t,n,a,b;
  cin >> t;
  while(t--){
    cin >> n;
    cin >> a >> b;
    string str ;
    cin >> str;

    int zr=0,one=0;
    str+=' ';//dummy  to stay in bounds
    for(int i=0; i<n ; ++i){

      if (str[i]=='0' and str[i+1]!='0')
        ++zr;
      else if(str[i]=='1' and str[i+1]!='1')
        ++one;
    }

    one= min(zr,one)+1;

    if(b >=0)
      cout << n*(a+b) << '\n';
    else 
      cout << n*a + one*b << '\n';
    

  }

  
  return 0;
}