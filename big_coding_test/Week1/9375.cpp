#include<bits/stdc++.h>
using namespace std;


int n,m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> m;
        map<string, int> mp;
        for (int j = 0; j < m; j++){
            string first;
            string second;
            cin >> first >> second;
            mp[second]++;
        }
        long long result=1;
        for (auto a : mp)
        {
            result *= a.second + 1;
        }
        result -= 1;
        cout << result << '\n';
    }
}