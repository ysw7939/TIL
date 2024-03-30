#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<string, int> mp;
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < N + M; i++)
    {
        string s;
        cin >> s;
        if (mp.find(s) == mp.end())
        {
            mp[s] = 1;
        }
        else
        {
            mp[s]++;
        }
    }

    int cnt = 0;
    vector<string> v;
    for (auto i : mp)
    {
        if (i.second == 2)
        {
            cnt++;
            v.push_back(i.first);
        }
    }

    cout << cnt << '\n';
    for(string s : v){
        cout << s << '\n';
    }
}