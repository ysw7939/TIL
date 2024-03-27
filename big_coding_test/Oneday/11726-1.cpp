#include <bits/stdc++.h>
using namespace std;

long long memo[1004] = {0, 1, 2, 3};

long long dp(int i)
{
    if (memo[i] != 0)
    {
        return memo[i];
    }
    return memo[i] = (dp(i - 2) + dp(i - 1));
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    long long moduler = 10007;
    long long result = dp(N);

    cout << result % moduler << '\n';
}