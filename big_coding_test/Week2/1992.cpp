#include <bits/stdc++.h>
using namespace std;

int N;
int myMap[68][68];
string result;
string go(int y, int x, int siz)
{
    bool isOne = true;
    bool isZero = true;
    for (int i = y; i < y + siz; i++)
    {
        for (int j = x; j < x + siz; j++){
            if (myMap[i][j] != 1)
            {
                isOne = false;
            }
        }
    }
    for (int i = y; i < y + siz; i++)
    {
        for (int j = x; j < x + siz; j++)
        {
            if (myMap[i][j] != 0)
            {
                isZero = false;
                break;
            }
        }
    }

    if(isOne){
        return "1";
    }
    if(isZero){
        return "0";
    }
    string ret = "(";
    ret += go(y, x, siz / 2);
    ret += go(y, x + siz/2, siz / 2);
    ret += go(siz/2+y, x, siz / 2);
    ret += go(siz / 2 + y, siz / 2 + x, siz / 2);
    ret += ")";

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool isOne = true;
    bool isZero = true;

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        string str;
        cin >> str;
        for (int j = 1; j <= N; j++)
        {
            myMap[i][j] = str[j - 1] - '0';
        }
    }
    
    result = go(1, 1, N);
    cout << result << "\n";
}