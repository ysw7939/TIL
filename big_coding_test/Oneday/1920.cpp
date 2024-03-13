#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<int, int> mp;
    int N, M;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        mp[a] = 1;
    }
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int a;
        cin >> a;
        if (mp.find(a) == mp.end())
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << 1 << '\n';
        }
    }
}