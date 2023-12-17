#include <bits/stdc++.h>
using namespace std;

int N;
string s, abc;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    cin >> s;
    char a = s[0];
    char b = s[2];
    string result;
    getline(cin, abc);
    for (int i = 0; i < N; i++)
    {
        getline(cin, abc);

        if (abc[0] == a && abc[abc.size() - 1] == b)
        {
            result += "DA\n";
        }
        else
        {
            result += "NE\n";
        }
    }
    cout << result << endl;
}
