#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    int arr[N + 4];
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }

    int start = 1;
    int end = 1;
    int cnt = 0;
    int sum = arr[1];

    while (start <= end && end <= N)
    {
        if (sum == M)
            cnt++;
        if (sum <= M)
        {
            end++;
            sum += arr[end];
        }
        else
        {
            if (start == end)
            {
                end++;
                sum += arr[end];
            }
            else
            {
                sum -= arr[start];
                start++;
            }
        }
    }

    cout << cnt << '\n';
}