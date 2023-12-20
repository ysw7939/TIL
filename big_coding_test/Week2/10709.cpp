#include <bits/stdc++.h>
using namespace std;

int H, W,po;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> H >> W;
    for (int i = 0; i < H; i++){
        string s;
        vector<int> ret;
        po = -1;
        cin >> s;
        for (int j = 0; j < W; j++){
            if(s[j] =='c'){
                po = j;
                ret.push_back(0);
            }else if (po != -1)
            {
                ret.push_back(j - po);
            }else if (po == -1)
            {
                ret.push_back(-1);
            }
        }
        for(int j : ret){
            cout << j << " ";
        }
        cout << "\n";
    }
}
