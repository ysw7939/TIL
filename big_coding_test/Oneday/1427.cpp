#include <bits/stdc++.h>
using namespace std;
bool cmp(char a, char b)
{
    return a > b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    vector<char> v;
    for (char ch : s)
    {
        v.push_back(ch);
    }
    sort(v.begin(), v.end(), cmp);

    for (char ch : v)
    {
        cout << ch;
    }
    cout << '\n';
}