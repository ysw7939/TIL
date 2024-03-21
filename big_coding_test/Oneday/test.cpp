#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    int arr[1030][1030];
    int memo[1030][1030];
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> arr[i][j];
            // if (i == 1 && j == 1)
            // {
            //     memo[i][j] = arr[i][j];
            // }
            // else if (i == 1)
            // {
            //     memo[i][j] = memo[i][j - 1] + arr[i][j];
            // }
            // else if (j == 1)
            // {
            //     memo[i][j] = memo[i - 1][j] + arr[i][j];
            // }
            // else
            // {
            //     memo[i][j] = memo[i - 1][j] + memo[i][j - 1] - memo[i - 1][j - 1] + arr[i][j];
            // }
        }
    }

    // for (int i = 1; i <= N; i++)
    // {
    //     for (int j = 1; j <= N; j++)
    //     {
    //         cout << memo[i][j] << " ";
    //     }
    //     cout << '\n';
    // }
}