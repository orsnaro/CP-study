#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int  N = 1e6;
int arr[N]{0};

//sheet static range query prob : B
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n; cin >> n ;
  int prefix_sum[n+1];

  for(int i=0 ;i<n ; ++i)
    cin >> arr[i];

  prefix_sum[0]=arr[0];
  for(int i=1 ;i<n ; ++i)
    prefix_sum[i]=arr[i]+prefix_sum[i-1];

  int q ; cin>> q;
  while(q--){
    int a ,b ; cin >> a >>b;
    int ans=0;
   if(a==0)
      ans=prefix_sum[b];
    else
      ans=prefix_sum[b]-prefix_sum[a-1];
    
    cout << ans <<'\n';
  }

  return 0;
}