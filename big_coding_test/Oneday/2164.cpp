#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    queue<int> q;
    for (int i = 1; i <= N; i++)
    {
        q.push(i);
    }

    bool check = true;

    while (q.size() != 1)
    {
        if (check)
        {
            q.pop();
            check = false;
        }
        else
        {
            q.push(q.front());
            q.pop();
            check = true;
        }
    }

    cout << q.front() << '\n';
}