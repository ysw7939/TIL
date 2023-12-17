#include <bits/stdc++.h>
using namespace std;
const int n = 6;
vector<int> adj[n];
int visited[n];
void dfs(int u){
    visited[u] = true;
    cout << u << '\n';
    for (int v : adj[u])
    {
        if(!visited[v]){
            dfs(v);
        }
    }
    cout << u << "로부터 시작되는 함수가 종료됨"
         << "\n";
    return;
}
int main()
{
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[4].push_back(2);
    adj[2].push_back(5);
    dfs(1);
}