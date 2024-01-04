#include <iostream>
#include <queue>
#include <tuple>
using namespace std;
vector<pair<int, int>> vPoint;
int fvisit[1004][1004], visitied[1004][1004], jy, jx, r, c;
char mm[1004][1004];
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
queue<pair<int, int>> q;
int jbfs()
{
    int y, x;
    while (!q.empty())
    {
        tie(y, x) = q.front();
        if (y == r - 1 || x == c - 1 || y==0 || x==0)
        {
            return visitied[y][x];
        }
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || ny >= r || nx < 0 || nx >= c)
                continue;
            if (visitied[ny][nx] != 0) continue;
            if(mm[ny][nx] == '.'){
                if(fvisit[ny][nx] != 0){
                    if (visitied[y][x] + 1 >= fvisit[ny][nx]) continue;
                }
              
                visitied[ny][nx] = visitied[y][x] + 1;
                q.push({ny, nx});
            }
          
        }
    }
    return 0;
}
void bfs() {
    int y, x;
    while (!q.empty())
    {
        tie(y, x) = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny <0 || ny >= r || nx < 0 || nx >= c) continue;
            if(fvisit
            [ny][nx] != 0 ) continue;
            if (mm[ny][nx] == '.' || mm[ny][nx] == 'J') {
                fvisit[ny][nx] = fvisit[y][x] + 1;
                q.push({ny, nx});
            }
        }
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < c; j++){
            mm[i][j] = s[j];
            if(s[j] == 'F'){
                vPoint.push_back({i, j});
            } else if (s[j] == 'J')
            {
                jy = i;
                jx = j;
            }
        }
    }
    for(auto a: vPoint ){
        fvisit
        [a.first][a.second] = 1;
        q.push(a);
    }
    bfs();
        visitied[jy][jx] = 1;
    q.push({jy, jx});

    int ret = jbfs();
    if(ret == 0){
        cout << "IMPOSSIBLE" << '\n';
    }else {
        cout << ret << '\n';
    }
    return 0;
}