#include <bits/stdc++.h>
using namespace std;

int myMap[104][104], visited[104][104];
vector<int> map_size;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int sum, N, M, K, map_count;

void dfs(int y, int x) {
    sum++;
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++)
    {
        int my = y + dy[i];
        int mx = x + dx[i];
        if (my < 0 || my >= N || mx < 0 || mx >= M) continue;
        if (visited[my][mx] == 1) continue;
        if (myMap[my][mx] == 1) continue;
        dfs(my, mx);
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> K;
    for (int k = 0; k < K; k++){
        int x1, y1, x2,y2;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        for (int i = y1; i < y2; i++)
        {
            for (int j = x1; j < x2; j++){
                myMap[i][j] = 1;
            }
        }
    }


    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            sum = 0;
            if (myMap[i][j] != 1 && visited[i][j] != 1)
            {
                dfs(i, j);
                map_size.push_back(sum);
                map_count++;
            }
        }
    }
    sort(map_size.begin(), map_size.end());

    cout << map_count << "\n";
    for (int i = 0; i < map_count; i++){
        cout << map_size[i] << " ";
    }
    cout << '\n';
}