#include <bits/stdc++.h>
using namespace std;
int N;
int cnt = 99;

bool check(int num)
{
    int first = num % 10;
    int second = num % 100 / 10;
    int ther = num / 100;
    if ((first - second) == (second - ther))
    {
        return true;
    }

    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    if (N < 100)
    {
        cout << N << '\n';
        return 0;
    }

    for (int i = 100; i <= N; i++)
    {
        if (check(i))
        {
            cnt++;
        }
    }
    cout << cnt << '\n';
}