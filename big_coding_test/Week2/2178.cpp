#include <bits/stdc++.h>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int mymap[104][104], visited[104][104];
int N, M;

void bfs(int y, int x) {
    queue<pair<int, int>> q;
    q.push({y, x});
    while (q.size())
    {
        tie(y, x) = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int my = y + dy[i];
            int mx = x + dx[i];
            if (my < 1 || my > N || mx < 1 || mx > M) continue;
            if (visited[my][mx] == 0 && mymap[my][mx] == 1)
            {
                visited[my][mx] = visited[y][x] + 1;
                q.push({my, mx});
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        string s;
        cin >> s;
        for (int j = 1; j <= M; j++)
        {
            mymap[i][j] = s[j-1] -'0';
        }
    }
    visited[1][1] = 1;

    bfs(1, 1);
        cout << visited[N][M] << "\n";
}