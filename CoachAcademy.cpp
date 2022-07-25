#include <bits/stdc++.h>

using namespace std;

vector<int> rotateLeft(int d, vector<int> arr);

int main()
{
    int n = 0, d = 0;
    cin >> n >> d;
    vector<int> arr(n);
    
    arr = rotateLeft(d, arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}


vector<int> rotateLeft(int d, vector<int> arr)
{

    int n = arr.size();

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < d; i++)
    {

        int temp = arr[0];

        for (int j = 0; j < n; j++)
        {
            arr[j] = arr[j + 1];
        }

        arr[(n - 1)] = temp;
    }

    return arr;
}