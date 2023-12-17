#include <bits/stdc++.h>
using namespace std;

static vector<int> vec;
int sum;

void check(vector<int> b){

    int sum = 0;
    for (int i : b)
        sum += i;
    if(sum == 100){
        sort(b.begin(), b.end());
        for(int i : b)
            cout << i << '\n';
    }
}
void combi(int start,vector<int> b) {
    if(b.size() == 7) {
        check(b);
        return;
    }

    for (int i = start + 1; i < 9; i++)
    {
        b.push_back(vec[i]);
        combi(i, b);
        b.pop_back();
    }
    return;
}
int main()
{
    for (int i = 0; i < 9; i++){
        int n;
        cin >> n;
        vec.push_back(n);
    }

    vector<int> b;
    combi(-1, b);
}
