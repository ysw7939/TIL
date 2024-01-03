#include<iostream>
using namespace std;

int mm[54][54], mv[54][54], cnt, ret, n, l, r, depth, sm, ave;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

void moving() {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(mv[i][j] == depth) {
                mm[i][j] = ave;
            }
        }
    }
}


void dfs(int y, int x, int depth) {
    mv[y][x] = depth;
    sm += mm[y][x];
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || ny >= n || nx < 0 || nx >=n ) continue;
        if(mv[ny][nx] != 0) continue;
        if (l <= abs(mm[y][x] - mm[ny][nx]) and r >= abs(mm[y][x] - mm[ny][nx])){
            dfs(ny, nx, depth);
        }

    }
    return;
}

    int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> l >> r;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> mm[i][j] ;
        }
    }

    while (true)
    {
        fill(&mv[0][0], &mv[53][53], 0);
        depth = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mv[i][j] == 0)
                {
                    depth++;
                    dfs(i, j, depth);
                    if (cnt >= 2)
                    {
                        ave = sm / cnt;
                        moving();
                    }
                }
                ave = 0;
                sm = 0;
                cnt = 0;
            }
        }

        if(depth == (n*n)){
            cout << ret << '\n';
            break;
        }
        ret++;
    }
}