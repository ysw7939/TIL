#include <bits/stdc++.h>
using namespace std;

int alphabet[26];
int c;
int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        string name;
        cin >> name;
        alphabet[name[0] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] >= 5)
        {
            cout << (char)(i + 'a');
            c++;
        }
    }

    if (c == 0)
    {
        cout << "PREDAJA";
    }
    cout << '\n';
    return 0;
}