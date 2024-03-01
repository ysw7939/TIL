#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    string arr[104];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int cnt = 0;
    int result = 0;
    int temp;
    vector<string> v;
    for (int i = 0; i < N; i++)
    {
        v.push_back(arr[i]);
    }
    do
    {
        for (string s : v)
        {
            for (char ch : s)
            {
                if (ch == 'O')
                {
                    cnt++;
                }
                else
                {
                    temp = max(temp, cnt);
                    cnt = 0;
                }
            }
        }
        result = max(result, temp);
        temp = 0;
    } while (next_permutation(v.begin(), v.end()));

    cout << result << '\n';
}