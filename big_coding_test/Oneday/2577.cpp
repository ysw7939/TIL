#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll A, B, C;
    cin >> A >> B >> C;
    ll sum;
    sum = A * B * C;
    string s;
    s = to_string(sum);
    int cnt[14];
    fill(cnt, cnt + 14, 0);
    for (char ch : s)
    {
        cnt[ch - '0']++;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << cnt[i] << '\n';
    }
}