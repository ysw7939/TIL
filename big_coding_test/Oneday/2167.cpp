#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    int arr[304][304];

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            int temp;
            cin >> temp;
            if (i == 1 && j == 1)
            {
                arr[i][j] = temp;
            }
            else if (i == 1)
            {
                arr[i][j] += arr[i][j - 1] + temp;
            }
            else if (j == 1)
            {
                arr[i][j] += arr[i - 1][j] + temp;
            }
            else
            {
                arr[i][j] += arr[i - 1][j] + arr[i][j - 1] + temp - arr[i - 1][j - 1];
            }
        }
    }

    int K;
    cin >> K;
    for (int k = 0; k < K; k++){
        int i, j, x, y;
        cin >> i >> j >> x >> y;
        cout << arr[x][y] - arr[x][j - 1] - arr[i - 1][y] + arr[i - 1][j - 1] << "\n";
    }


}