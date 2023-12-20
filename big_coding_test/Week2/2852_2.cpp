#include <bits/stdc++.h>
using namespace std;

int bsum, asum,  N, a, b;
string pre, now;

void printR(int i){
    string retM = "00" + to_string(i / 60);
    string retS = "00" + to_string(i % 60);
    cout << retM.substr(retM.length() - 2, 2) << ":" << retS.substr(retS.length() - 2, 2) << "\n";
}
int changeS(string s){
    return atoi(s.substr(0, 2).c_str()) * 60 + atoi(s.substr(3, 2).c_str());
}
void go(int & sum, string pre, string now)
{
    sum += changeS(now) - changeS(pre);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;

    for (int i = 0; i < N; i++){
        int tim;
        cin >> tim;
        cin >> now;
        if(a>b)
            go(asum, pre, now);
        else if (a<b)
        {
            go(bsum, pre, now);
        }
        tim == 1 ? a++ : b++;
        pre = now;
    }
    if (a > b)
        go(asum, pre, "48:00");
    else if (a < b)
    {
        go(bsum, pre, "48:00");
    }
    printR(asum);
    printR(bsum);
}