#include <bits/stdc++.h>
using namespace std;

int N, M, result, sy,sx, ey,ex;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int visited[104][104];
int myMap[104][104]; 
void bfs (int y, int x) {
    queue<pair<int, int>> q;
    q.push({y, x});
    while(q.size()){
        tie(y, x) = q.front();
        q.pop();
        for (int i = 0; i < 4; i++){
            int my = y + dy[i];
            int mx = x + dx[i];
            if (my >= N || mx >= M || my<0 || my<0 ) continue;
            if(myMap[my][mx]==0) continue;
            if(!visited[my][mx]) {
                visited[my][mx] = visited[y][x] + 1;
                q.push({my, mx});
            }
        }
    }
}

int main() {
    cin >> N >> M >> sy >> sx >> ey >> ex;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> myMap[i][j];
        }
    }
    visited[sy][sx] = 1;
    bfs(sy, sx);
    cout << visited[ey][ex] << '\n';

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << visited[i][j] << ' ';
        }
        cout << "\n";
    }
}