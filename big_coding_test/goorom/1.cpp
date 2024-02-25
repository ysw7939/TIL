#include <bits/stdc++.h>
using namespace std;
int n, k;

bool cmp(string a, string b)
{
    if (a.length() == b.length())
    {
        return a < b;
    }

    return a.length() < b.length();
}

int main()
{

    cin >> n;
    cin >> k;
    vector<string> note;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        note.push_back(s);
    }

    sort(note.begin(), note.end(), cmp);
    cout << note[k - 1] << "\n";

    return 0;
}