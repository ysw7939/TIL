#include <iostream>
#include <queue>
using namespace std;

int n, k;
const int MAX = 200000;
int visited[MAX + 4];
long long cnt[MAX + 4];

void bfs(int su) {
    queue<int> q;
    q.push(su);
    while (!q.empty())
    {
        su = q.front();
        q.pop();
        for (int i : {su + 1, su - 1, su * 2})
        {
            if (0 <= i && i <= MAX)
            {
                if(!visited[i]){
                    visited[i] = visited[su] + 1;
                    q.push(i);
                    cnt[i] += cnt[su];
                } else if (visited[i] == visited[su] +1)
                {
                    cnt[i] += cnt[su];
                 }
              }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    cin >> k;
    visited[n] = 1;
    cnt[n] = 1;
    bfs(n);
    cout << visited[k]-1 << '\n';
    cout << cnt[k] << '\n';
}