#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    int cnt = 0;
    string output = "";
    for(char ch : s) {
        if(cnt == 10) {
            cout << output << '\n';
            output = "";
            cnt = 0;
        }
        output += ch;
        cnt++;
    }

    cout << output << '\n';
}