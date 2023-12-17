#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    char copy[s.size()];
    string a;
    for (int i = 0; i < s.size(); i++)
    {
        if('a' <= s[i] && s[i] <='z'){
            a += (char)((s[i] - 'a' + 13) % 26 + 'a');
        }else if ('A' <= s[i] && s[i] <= 'Z')
        {
            a += (char)((s[i] - 'A' + 13) % 26 + 'A');
        }else if('0' <= s[i] && s[i] <= '9' ) {
            a += s[i];
        }else{
            a += " ";
        }
    }

    cout << a << '\n';

}