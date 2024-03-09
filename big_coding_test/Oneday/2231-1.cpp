#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, sum, result;
    cin >> N;
    int start = N / 2;

    for (int i = start; i < N; i++)
    {
        sum = i;
        int temp = i;
        while (temp > 0)
        {

            sum += (temp % 10);
            temp /= 10;
        }
        if (sum == N)
        {
            result = i;
            break;
        }

        result = 0;
    }

    cout << result << '\n';
}