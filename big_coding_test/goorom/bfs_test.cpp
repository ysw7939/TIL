#include <bits/stdc++.h>
using namespace std;

const int MAX = 1004;
vector<int> G[MAX];
int D[MAX];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M, K;
    cin >> N >> M >> K;
    for (int i = 0; i < M; ++i)
    {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    memset(D, 0x3f, sizeof(D));
    D[1] = 0;
    queue<int> Q;
    Q.push(1);
    while (!Q.empty())
    {
        int cur = Q.front();
        Q.pop();
        for (int next : G[cur])
        {
            if (D[next] <= D[cur] + 1)
                continue;
            D[next] = D[cur] + 1;
            Q.push(next);
        }
    }

    if (D[N] <= K)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}