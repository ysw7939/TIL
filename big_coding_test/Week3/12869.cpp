#include<iostream>
#include<queue>
using namespace std;

int n, visitied[64][64][64];

struct Scv
{
    Scv(int x, int y, int z) : x(x), y(y), z(z){};
    int x, y, z;
};


int attack[6][3]{
    {9, 3, 1},
    {9, 1, 3},
    {3, 9, 1},
    {3, 1, 9},
    {1, 3, 9},
    {1, 9, 3}};

void bfs(int x, int y, int z){
    queue<Scv> q;
    q.push(Scv(x, y, z));
    while (!q.empty())
    {
        x = q.front().x;
        y = q.front().y;
        z = q.front().z;

        if (x == 0 && y == 0 && z == 0)
            break;
        q.pop();

        for (int i = 0; i < 6; i++){
            int nx = max(0, x - attack[i][0]);
            int ny = max(0, y - attack[i][1]);
            int nz = max(0, z - attack[i][2]);
            if(visitied[nx][ny][nz] != 0 ) continue;
            visitied[nx][ny][nz] = visitied[x][y][z] + 1;
            q.push(Scv(nx, ny, nz));
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    int temp[3];
    fill(&temp[0], &temp[3], 0);
    for (int i = 0; i < n; i++)
    {
        cin >> temp[i];
    }

    visitied[temp[0]][temp[1]][temp[2]] = 1;
    bfs(temp[0], temp[1], temp[2]);
    cout << visitied[0][0][0] - 1 << '\n';
}