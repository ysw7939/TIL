#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
    if (a.length() == b.length())
    {
        return a < b;
    }

    return a.length() < b.length();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<string> v;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end(), cmp);
    /**
     * erase는 중복제거하고 나머지 길이만큼 그대로 가져옴
     * erase는 중복제거된것의 마지막 이터레이터를 반환함 
    */
    v.erase(unique(v.begin(), v.end()), v.end());

    for (string s : v)
    {
        cout << s << '\n';
    }
}