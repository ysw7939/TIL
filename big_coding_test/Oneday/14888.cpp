#include <bits/stdc++.h>
using namespace std;
int N, arr[16], visit[16];
int mi = 1987654321;
int mx = -1987654321;
vector<int> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    // 0은 더하고, 1은 (-) 2는 (*) 3은 (/)
    for (int i = 0; i < 4; i++)
    {
        int temp;
        cin >> temp;
        for (int j = 0; j < temp; j++)
        {
            v.push_back(i);
        }
    }
    do
    {
        int result = arr[0];
        for (int i = 0; i < N - 1; i++)
        {
            if (v[i] == 0)
            {
                result += arr[i + 1];
            }
            else if (v[i] == 1)
            {
                result -= arr[i + 1];
            }
            else if (v[i] == 2)
            {
                result *= arr[i + 1];
            }
            else
            {
                result /= arr[i + 1];
            }
        }
        mi = min(mi, result);
        mx = max(mx, result);
        // cout << result << '\n';
    } while (next_permutation(v.begin(), v.end()));

    cout << mx << '\n';
    cout << mi << '\n';
}