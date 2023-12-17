#include<bits/stdc++.h>
using namespace std;
map<string, int> mp;
string a[] = {"주홍철", "이승철", "박종선"};
int main() {
    for (int i = 0; i < 3; i++){
        //mp.insert({a[i], i + 1});
        mp[a[i]] = i + 1;
    }
    auto it = mp.find("주홍철");
    cout << mp["이승철"] << endl;
}