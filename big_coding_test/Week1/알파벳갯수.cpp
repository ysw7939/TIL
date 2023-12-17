#include<bits/stdc++.h>
using namespace std;

int alphabet[26];

int main() {
    string n;
    cin >> n;
    for (char i : n)
        alphabet[i - 'a']++;
    for(int i : alphabet) {
        cout << i << ' ';
    }
    cout << '\n';
}
