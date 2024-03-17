#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, X;
    cin >> N >> X;
    int arr[10004];
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        if(a < X){
            cout << a << ' ';
        }
    }

    cout << '\n';
}