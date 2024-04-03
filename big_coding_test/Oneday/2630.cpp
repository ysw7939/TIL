#include <bits/stdc++.h>
using namespace std;
int N;
int arr[135][135];
int white = 0;
int blue = 0;

void go(int x, int y, int size)
{
    int check = arr[x][y];
    for (int i = x; i < x + size; i++)
    {
        for (int j = y; j < y + size; j++)
        {
            if (arr[i][j] != check)
            {
                go(x, y, size / 2);
                go(x, y + size / 2, size / 2);
                go(x + size / 2, y, size / 2);
                go(x + size / 2, y + size / 2, size / 2);
                return;
            }
        }
    }

    if (check == 1)
    {
        blue++;
    }
    else
    {
        white++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> arr[i][j];
        }
    }

    go(1, 1, N);

    cout << white << '\n';
    cout << blue << '\n';
}