#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int x, y;
        cin >> x >> y;

        int arr[x + 4][y + 4];
        for (int i = 1; i <= y; i++)
        {
            arr[0][i] = i;
        }

        for (int i = 1; i <= x; i++)
        {
            for (int j = 1; j <= y; j++)
            {
                if (j == 1)
                {
                    arr[i][j] = 1;
                }
                else
                {
                    arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
                }
            }
        }

        cout << arr[x][y] << '\n';
    }

}