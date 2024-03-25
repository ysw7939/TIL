#include <bits/stdc++.h>
using namespace std;

// int cnt = 0;
int memo[5004];

int dp(int i)
{
    if (i < 0)
        return 9999;
    if (i == 3 || i == 5)
        return 1;
    if (memo[i] != 0)
        return memo[i];
    return memo[i] = min(dp(i - 3) + 1, dp(i - 5) + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    memo[3] = 1;
    memo[5] = 1;

    dp(N);
    if (memo[N] > 5000)
    {
        cout << -1 << '\n';
        return 0;
    }
    cout << memo[N] << '\n';
}