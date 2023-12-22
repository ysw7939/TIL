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

        stack<char> stk;
        getline(cin, s);

        if (s[0] == '.')
        {
            break;
        }

        for (char ch : s)
        {
            if (ch == '(' || ch == '[')
            {
                stk.push(ch);
            }
            if (ch == ')')
            {
                if (!stk.empty() && stk.top() == '(')
                {
                    stk.pop();
                }
                else
                {
                    stk.push('n');
                    break;
                }
            }
            if (ch == ']')
            {
                if (!stk.empty() && stk.top() == '[')
                {
                    stk.pop();
                }
                else
                {
                    stk.push('n');
                    break;
                }
            }
        }

  
            if (stk.empty())
            {
                cout << "yes"
                     << "\n";
            }
            else
            {
                cout << "no"
                     << "\n";
            }
 
    }
    return 0;
}