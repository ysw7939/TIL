#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    int x;
    int memo[1030][1030];
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> x;
            if (i == 1 && j == 1)
            {
                memo[i][j] = x;
            }
            else if (i == 1)
            {
                memo[i][j] = memo[i][j - 1] + x;
            }
            else if (j == 1)
            {
                memo[i][j] = memo[i - 1][j] + x;
            }
            else
            {
                memo[i][j] = memo[i - 1][j] + memo[i][j - 1] - memo[i - 1][j - 1] + x;
            }
        }
    }

    for (int i = 0; i < M; i++)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int result = memo[x2][y2] - memo[x1 - 1][y2] - memo[x2][y1 - 1] + memo[x1 - 1][y1 - 1];
        cout << result << '\n';
    }
}