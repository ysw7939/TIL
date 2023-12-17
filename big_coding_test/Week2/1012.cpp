#include <bits/stdc++.h>
using namespace std;

int T, M, N, K, result;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int myMap[54][54];

void dfs(int y, int x){
    myMap[y][x] = 2;
    for (int i = 0; i < 4; i++)
    {
        int my = y + dy[i];
        int mx = x + dx[i];
        if (my < 0 || my >= N || mx < 0 || mx >= M) continue;
        if (myMap[my][mx] != 1) continue;
        dfs(my, mx);
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> M >> N >> K;
        
        result = 0;
        for (int j = 0; j < K; j++){
            int y, x;
            cin >> x >> y;
            myMap[y][x] = 1;
        }
        for (int j = 0; j < N; j++){
            for (int k = 0; k < M; k++){
                if(myMap[j][k] == 1){
                    result++;
                    dfs(j, k);
                }
            }
        }
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < M; k++)
            {
                myMap[j][k] = 0;
            }
        }
        cout << result << "\n";
    }
}