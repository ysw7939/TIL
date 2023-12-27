#include<bits/stdc++.h>
using namespace std;

int N, la, arr[304],i;



int main()
{
    i = 0;
    la = 0;
    while (i != 300)
    {
        la++;
        if (to_string(la).find("2400") != string::npos)
        {
            i++;
            arr[i] = la;
        }
    }

    cin >> N;
    cout << arr[N] << '\n';
}