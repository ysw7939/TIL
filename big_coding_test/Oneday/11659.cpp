#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    int arr[100004], sum[100004];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if (sum[i-1] != 0)
        {
            sum[i] = sum[i - 1] + arr[i];
        }
        else
        {
            sum[i] = arr[i];
        }
    }
    for (int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        cout << sum[b - 1] - sum[a-2] << '\n';
    }
}
