// sheet sorting II prob : A  ->i 99% understand the merge concept and recusrion
// backtracking implementaion of it  now .
#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr);                                                            \
  cout.tie(nullptr);

using namespace std;
using ll = long long;

// const int N = 1e6;
// int arr[N];
vector<int> v;
int cntr;

void mergesorter(int bgn, int md, int end, vector<int> &arr) {
  vector<int> frstv, scndv;
  for (int i = bgn; i <= md; ++i)
    frstv.push_back(v[i]);
  for (int i = md + 1; i <= end; ++i)
    scndv.push_back(v[i]);

  frstv.emplace_back(INT_MAX);
  scndv.emplace_back(INT_MAX);

  int findx = 0, sindx = 0;
  for (int i = bgn; i <= end; i++) {
    if (frstv[findx] <= scndv[sindx])
      v[i] = frstv[findx++];
    else {
      // if(frstv[findx] != INT_MAX )
      cntr += frstv.size() - 1 - findx;
      v[i] = scndv[sindx++];
    }
  }

}
void mergedevider(int bgn, int end, vector<int> &arr) {
  if (bgn >= end)
    return;

  int md = (bgn + end) / 2;

  mergedevider(bgn, md, v);
  mergedevider(md + 1, end, v);
  mergesorter(bgn, md, end, v);
}

int main() {
  fastio;

  int t;
  cin >> t;
  while (t--) {
    cntr = 0;
    v.clear();
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
      int temp;
      cin >> temp;
      v.push_back(temp);
    }
    mergedevider(0, v.size() - 1, v);
    cout << cntr << '\n';
  }

  return 0;
}