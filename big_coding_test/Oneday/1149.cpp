#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cost[3];
    int arr[1004][3];
    arr[0][0] = 0;
    arr[0][1] = 0;
    arr[0][2] = 0;
    int N;

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> cost[0] >> cost[1] >> cost[2];

        arr[i][0] = min(arr[i - 1][1], arr[i - 1][2]) + cost[0];
        arr[i][1] = min(arr[i - 1][0], arr[i - 1][2]) + cost[1];
        arr[i][2] = min(arr[i - 1][1], arr[i - 1][0]) + cost[2];
    }

    cout << min(arr[N][0], min(arr[N][1], arr[N][2])) << '\n';
}