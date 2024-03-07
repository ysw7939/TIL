#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> v;
    for (int i = 1; i <= N; i++)
    {
        if(N % i == 0){
            v.push_back(i);
        }
    }

    if(v.size() >= K){
        cout << v[K-1] << '\n';
    }
    else
    {
        cout << 0 << '\n';
    }
}