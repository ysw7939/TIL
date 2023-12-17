#include<bits/stdc++.h>
using namespace std;

int N, K;
long long temp, result;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    cin >> K;
    int arr[100004];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    temp = 0;
    for (int i = 0; i < K; i++)
    {
        temp += arr[i];
    }
    //result = temp;
    for (int i = K, j = 0; i < N; i++, j++)
    {
        temp += arr[i] - arr[j];

        result = max(temp, result);
    }
    cout << result << '\n';
}