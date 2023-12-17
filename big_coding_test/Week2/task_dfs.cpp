#include <bits/stdc++.h>
using namespace std;

int N,M,result;
int myMap[104][104];
bool visited[104][104];
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void dfs(int y, int x) {
    visited[y][x] = true;
    cout << y << " : " << x << "\n";
    for (int i = 0; i < 4; i++)
    {
        int my = y + dy[i];
        int mx = x + dx[i];
        if (my >= N || my < 0 || mx >= M || mx <0) continue;
        if(visited[my][mx]) continue;
        if(myMap[my][mx] == 0) continue;
        dfs(my, mx);
    }
    return;
}
int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> myMap[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if(visited[i][j]) continue;
            if(myMap[i][j]==0) continue;
            cout << i << " : " << j << " dfs가 시작됩니다.\n";
            result++;
            dfs(i, j);

        }
    }
    cout << result << "\n";
}
