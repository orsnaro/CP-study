#include <bits/stdc++.h>
#define fastio                                                                 \
  (ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL));
// backtacking   prob : H (with recursion)
using namespace std;
using ll = long long;


set<vector<string>> vst;
void ring(int x);
void sol();
void permuter(int b, int e);
bool prime_find(int p);

const int N = 1e5;
int arr[N];
// vector<int> v;
int b, e;
int target, cntr = 0;

int main() {
  // fastio;
  while (scanf("%d", &target) != EOF){
    vst.clear();
    sol();
  }

  return 0;
}

void sol() {

  fill(arr, arr + N, 0);

  for (int i = 0; i < target; ++i)
    arr[i] = i + 1;

  cntr++;
  if (cntr > 1)
    printf("\n");
  printf("Case %d:\n", cntr);

  permuter(1, target - 1);

  for (auto &x : vst) {
    for (auto &y : x)
      cout << y;
  }
}

void permuter(int b, int e) {
  int x = e + 1; // size of vector 'v'

  if (b == e)
    return;

  for (int i = b; i <= e; ++i) {
    swap(arr[b], arr[i]);
    ring(x);
    permuter(b + 1, e);
    swap(arr[b], arr[i]);
  }
}

void ring(int x) {

  if (x == 1) {
    int cycle = 1 + arr[target - 1];

    if (prime_find(cycle)) {
      vector<string> tempv;
      for (int i = 0; i < target; ++i) {
        string temp2 = to_string(arr[i]);
        tempv.emplace_back(temp2);
        // printf("%d", arr[i]);
        if (i + 1 == target)
          break;
        tempv.emplace_back(" ");
        // printf(" ");
      }
      tempv.emplace_back("\n");
      vst.insert(tempv);
      return;
    }
  }

  bool isprime = prime_find(arr[x - 1] + arr[x - 2]);
  if (isprime)
    ring(x - 1);
  else
    return;
}

bool prime_find(int p) {
  for (int i = 2; i <= (p / i); i++)
    if (p % i == 0)
      return false;
  return true;
}
