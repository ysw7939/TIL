#include<bits/stdc++.h>
using namespace std;

bool visited[104][104];
int myMap[104][104];
int N, M, cntT, ret;
int dy[4] = {-1,0,1,0};
int dx[4] = {0, 1, 0, -1};
void dfs(int y, int x){
    visited[y][x] = true;
    for (int i = 0; i < 4; i++)
    {
        int my = y + dy[i];
        int mx = x + dx[i];
        if(my < 0 || my >= N || mx < 0 || mx >= M) continue;
        if(visited[my][mx]) continue;
        if(myMap[my][mx] == 1) {
            myMap[my][mx] = 2;
            continue;
        }
        if(myMap[my][mx] == 0){
            dfs(my, mx);
        }
    }
    return;
}
bool chOne() {
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
           if(myMap[i][j] == 1){
               return true;
           }
        }
    }
    return false;
}
void toZero() {
    cntT = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if(myMap[i][j] == 2) {
                cntT++;
                myMap[i][j] = 0;
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
    for (int i = 0; i < N; i++){

        for (int j = 0; j < M; j++)
        {
            cin >> myMap[i][j];
        }
    }


    while (chOne())
    {
        dfs(0, 0);
        toZero();
        ret++;
        fill(&visited[0][0], &visited[N - 1][M - 1], false);
    }

    cout << ret << '\n';
    cout << cntT << '\n';
}