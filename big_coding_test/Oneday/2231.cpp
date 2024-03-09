#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[1100004];
    fill(arr, arr + 1000000, 0);
    int idx, N;
    int i = 1;
    cin >> N;
    while (true)
    {
        int val;

        if (i < 10)
        {
            val = i + i;
        }
        else if (i < 100)
        {
            val = i + (i / 10) + (i % 10);
        }
        else if (i < 1000)
        {
            val = i + (i / 100) + (i % 100 / 10) + (i % 10);
        }
        else if (i < 10000)
        {
            val = i + (i / 1000) + (i % 1000 / 100) + (i % 100 / 10) + (i % 10);
        }
        else if (i < 100000)
        {
            val = i + (i / 10000) + (i % 10000 / 1000) + (i % 1000 / 100) + (i % 100 / 10) + (i % 10);
        }
        else if (i < 1000000)
        {
            val = i + (i / 100000) + (i % 100000 / 10000) + (i % 10000 / 1000) + (i % 1000 / 100) + (i % 100 / 10) + (i % 10);
        }
        else
        {
            break;
        }

        if (arr[val] == 0)
        {
            arr[val] = i;
        }
        i++;
    }
    cout << arr[N] << "\n";
}