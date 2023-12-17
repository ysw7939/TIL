#include<bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;

    string b = a;
    reverse(a.begin(), a.end());
    if(a.compare(b) == 0){
        cout << 1 << '\n';
    }else{
        cout << 0 << '\n';
    }
}
