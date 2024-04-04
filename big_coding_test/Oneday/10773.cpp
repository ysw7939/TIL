#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int K;
    cin >> K;

    stack<int> s;
    for (int i = 0; i < K; i++)
    {
        int input;
        cin >> input;
        if (input == 0)
        {
            s.pop();
        }
        else
        {
            s.push(input);
        }
    }

    int result = 0;
    while (!s.empty())
    {
        result += s.top();
        s.pop();
    }

    cout << result << '\n';
}