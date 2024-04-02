#include <bits/stdc++.h>
using namespace std;
int N, S;
int cnt = 0;
int arr[24];

void go(int start, int i)
{
    if (start == N && i == S)
    {
        cnt++;
        return;
    }
    else if (start == N)
    {
        return;
    }

    go(start + 1, i);
    go(start + 1, i + arr[start]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> S;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    go(0, 0);
    if (S == 0)
    {
        cnt--;
    }
    cout << cnt << '\n';
}