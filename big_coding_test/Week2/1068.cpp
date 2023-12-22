#include<bits/stdc++.h>
using namespace std;

int N,M,ret;
vector<int> adj[54];
void dfs(int u)
{

    int child = 0;

    if (u == M)
    {
        return;
    }
    
    for (int i : adj[u])
    {
        if(i == M ){
            continue;
        }
        dfs(i);
        child++;
    }
    if(child == 0){
        ret++;
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    int root;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        if(temp == -1){
            root = i;
            continue;
        }
        adj[temp].push_back(i);
    }
    cin >> M;

    dfs(root);
    cout << ret << "\n";
}
