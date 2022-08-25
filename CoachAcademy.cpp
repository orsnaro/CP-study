#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int N = 15;
char arr[N];
char arr2[N];

// bitmasks  prob : F
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin.tie(nullptr);
  cout.tie(nullptr);

  string sent, rec;
	cin >> sent >> rec;
  int cntr = 0 , cntr2 =0 , notsure=0;
	
  for (int i = 0; i < sent.size(); ++i) {
    if (sent[i] == '+')
      ++cntr;
    else
      --cntr;
    if (rec[i] == '+')
      ++cntr2;
    else if (rec[i] == '-')
      --cntr2;
    else
      ++notsure;
  }

  int success = 0;
  double couldhe = 0;

  for (int msk = 0; msk < (1 << notsure); ++msk) {
      int temp = cntr2;
    for (int i = 0; i < notsure ; ++i) {
      if (msk & (1 << i)) // let 1b='+' and  0b='-'
        temp++;
      else
        temp--;
    }
    if (temp == cntr)
      ++success;
  }

  couldhe = success / (double)(1 << notsure);
  cout << fixed << setprecision(12) << couldhe << '\n';

  return 0;
}