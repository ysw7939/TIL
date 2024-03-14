#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;
    for (int i = 0; i < 3; i++ ){
        int input;
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    cout << v[1] << '\n';
}
