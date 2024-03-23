#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, S;
    cin >> N >> S;
    int arr[N + 4];
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }

    int end = 1;
    int start = 1;
    int result = INT_MAX;
    int sum = arr[1];
    while (start <= end && end <= N)
    {
        if (sum >= S)
        {
            result = min(result, end - start + 1);
        }
        if (sum < S)
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
    if(result == INT_MAX){
        cout << 0 << '\n';
        return 0;
    }

    cout << result << '\n';
}