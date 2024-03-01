#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    string in, cmd;
    int cnt = 0;
    cin >> N >> M;
    cin >> in >> cmd;

    int idx = 0;
    for (int i = 0; i < N; i++)
    {
        if (in[i] == cmd[idx])
        {
            idx++;
        }
        else
        {
            idx = 0;
        }

        if (idx == M)
        {
            cnt++;
            idx = 0;
        }
    }

    cout << cnt << '\n';
}