#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main() {
    for (int i = 1; i <= 5; i++){
        v.push_back(i);
        v.push_back(i);
    }
    for (int i: v)
        cout << i << " ";
    cout << '\n';

    // 중복되지 않은 요소들로 채운후, 그다음의 인덱스 이터레이터를 반환한다.
    auto it = unique(v.begin(), v.end());
    cout << it - v.begin() << '\n';
    for (int i : v)
        cout << i << " ";
    cout << '\n';
    return 0;
}