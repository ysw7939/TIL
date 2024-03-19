#include <bits/stdc++.h>
using namespace std;

vector<string> split(const string &input, string delimiter)
{
    vector<string> result;
    auto start = 0;
    auto end = input.find(delimiter);
    while (end != string::npos)
    {
        result.push_back(input.substr(start, end - start));
        start = end + delimiter.size();
        end = input.find(delimiter, start);
    }
    result.push_back(input.substr(start));
    return result;
}

int add(string s)
{
    vector<string> sumArr = split(s, "+");
    int result = 0;
    for (string str : sumArr)
    {
        result += stoi(str);
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    vector<string> sarr = split(s, "-");
    vector<int> intArr;
    for (string s : sarr)
    {
        intArr.push_back(add(s));
    }
    int result = intArr[0];
    for (int i = 1; i < intArr.size(); i++){
        result -= intArr[i];
    }

    cout << result << '\n';
}