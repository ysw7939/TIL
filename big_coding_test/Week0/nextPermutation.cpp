#include <bits/stdc++.h>
using namespace std;

vector<int> a = {1, 2, 3};
int n = 3, r = 3;

int main() {
    do {
        for(int i : a){
            cout << i << " ";
        }
        cout << '\n';
    } while (next_permutation(a.begin(), a.end()));
    return 0;
}