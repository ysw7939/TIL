#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    pair<int, int> body[54];
    int rank[54];
    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        body[i] = {x, y};
    }
    int cnt = 1;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if(body[i].first < body[j].first && body[i].second < body[j].second) {
                cnt++;
            }
        }
        rank[i] = cnt;
        cnt = 1;
    }

    for (int i = 0; i < N; i++){
        cout << rank[i] << ' ';
    }
    cout << '\n';
 
}