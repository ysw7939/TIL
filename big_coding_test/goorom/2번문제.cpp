#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    vector<pair<float, float>> peple;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        float a, b;
        cin >> a >> b;
        peple.push_back({a, b});
    }

    int cnt[104];

    int fst = 0;
    float big = 0;

    for (int i = 1; i < 100; i++)
    {
        for (int j = 0; j < N; j++)
        {
            float point = (peple[j].first * i / 100) + (peple[j].second * (100 - i) / 100);

            if (big < point)
            {
                big = point;
                fst = j;
            };
        }
        big = 0;

        cnt[fst]++;
    }

    for (int i = 0; i < N; i++)
    {
        cout << cnt[i] << " ";
    }
    cout << '\n';
}