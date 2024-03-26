#include <bits/stdc++.h>
using namespace std;

int memo[50] = {
    0,
    1,
};
int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return memo[n];
    }

    if (memo[n] != 0)
    {
        return memo[n];
    }

    return memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        if (N == 0)
        {
            cout << "1 0" << '\n';
        }
        else
        {
            cout << fibonacci(N - 1) << " " << fibonacci(N) << "\n";
        }
    }
}