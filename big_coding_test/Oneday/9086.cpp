#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    string s[15];
    for (int i = 0; i < T; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < T; i++){
        cout << s[i][0] << s[i][s[i].length()-1] << '\n';
    }
}