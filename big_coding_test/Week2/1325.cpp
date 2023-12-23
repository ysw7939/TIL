#include <bits/stdc++.h>
using namespace std;

int N, M, ret, mx;
vector<int> adj[10004];
int memo[10004], visited[10004];
int dfs(int du)
{
    cout << "출력 : " << du << '\n';
    visited[du] = 1;
    int cnt = 1;
    for (int i : adj[du])
    {
        if (visited[i])
            continue;
        cnt += dfs(i);
    }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[b].push_back(a);
    }

    for (int i = 1; i <= N; i++)
    {
        fill(&visited[0], &visited[10004], 0);
        memo[i] = dfs(i);

        mx = max(memo[i], mx);
    }

    for (int i = 1; i <= N; i++)
    {
        if (mx == memo[i])
        {
            cout << i << " ";
        }
    }
    cout << '\n';
    return 0;
}