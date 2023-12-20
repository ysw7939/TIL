#include <bits/stdc++.h>
using namespace std;

int T, rnt;
vector<int> vrnt;
void check25(int i)
{
    if(i < 25){
        return;
    }
    rnt += i / 25;
    check25(i / 25);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;

    for (int i = 0; i < T; i++){
        int t;
        rnt = 0;
        cin >> t;
        check25(t);
        rnt += t / 5;
        check25(t / 5);
        vrnt.push_back(rnt);
    }
    for (int i: vrnt){
        cout << i << "\n";
    }
}