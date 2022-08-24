#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int N = 100;
int arr[N];

// bitmasks  prob : c
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;
	while (t--)
	{
		bool done = 0;
		int n, p;
		cin >> n >> p;
		if (n == 0)
		{
			cout << "YES\n";
			continue;
		}

		for (int i = 0; i < p; ++i)
		{
			cin >> arr[i];
		}
		bool invalid = 1;
		for (int msk = 0; msk < (1 << p); ++msk)
		{
			int sum = 0;
			for (int i = 0; i < p; ++i)
			{
				if (msk & (1 << i))
				{ // or (msk>>i) & 1
					sum += arr[i];
				}
				if (sum == n)
				{
					cout << "YES\n";
					invalid = 0;
					done = 1;
					break;
				}
			}
			if (done == 1)
				break;
		}
		if (invalid)
			cout << "NO\n";
	}

	return 0;
}