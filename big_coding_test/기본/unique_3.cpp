#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> s{4, 3, 3, 5, 1, 2, 3};
    sort(s.begin(), s.end());
    // unique의 반환값은 중복된것을 모두제거한것의 다음값이다.
    s.erase(unique(s.begin(), s.end()), s.end());
    for(int i : s)
        cout << i << " ";
    cout << "\n";

}