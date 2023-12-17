#include <bits/stdc++.h>
using namespace std;

int sum, result, N;
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int myMap[104][104], visited[104][104];

void dfs(int y, int x, int depth){
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++)
    {
        int my = y + dy[i];
        int mx = x + dx[i];
        if(my < 0 || mx <0 || my >= N || mx >= N) continue;
        if(visited[my][mx] != 0 ) continue;
        if(myMap[my][mx] <= depth) continue;
        dfs(my, mx, depth);
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cin >> myMap[i][j];
        }
    }

    for (int d = 0; d < 104; d++)
    {
        fill(&visited[0][0], &visited[103][104], 0);
        sum = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++){
                if(visited[i][j] == 0 && myMap[i][j] > d){
                    sum++;
                    dfs(i, j, d);
                }
            }
        }
        if(result < sum) {
            result = sum;
        }
    }
    cout << result << "\n";
}