#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    long long sum = 0;
    cin >> N >> M;

    long long arr[1004];
    fill(&arr[0], &arr[1004], 0);
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        sum += temp;
        arr[sum % M]++;
    }

    long long cnt = 0;
    for (int i = 0; i <= M; i++)
    {
        cnt += arr[i] * (arr[i] - 1) / 2;
    }

    cout << arr[0] + cnt << '\n';
}