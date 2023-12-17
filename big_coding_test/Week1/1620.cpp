#include <bits/stdc++.h>
using namespace std;

map<string, string> mp ;
int N, M;
string Q;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        cin >> Q;
        mp.insert({Q, to_string(i)});
        mp.insert({to_string(i), Q});
    
    }

    for (int i = 0; i < M; i++)
    {
        cin >> Q;
        auto re = mp.find(Q);
        cout << (*re).second << '\n';
    }
}