#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    while (true)
    {
        cin >> s;
        if (s == "0")
        {
            break;
        }
        string rev = s;
        reverse(s.begin(), s.end());
        if (rev == s)
        {
            cout << "yes" << '\n';
        }
        else
        {
            cout << "no" << '\n';
        }
    }
}