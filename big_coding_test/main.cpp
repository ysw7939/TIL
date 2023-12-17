#include <bits/stdc++.h>
using namespace std;

int N, M;
bool *check;
void printV(vector<int> &b)
{
    for (int i : b){
        cout << i << " ";
    }
    cout << "\n";
}
void makePermutation(int r, vector<int> &b) {
    if(b.size() == M){
        printV(b);
        return;
    }
    for (int i = 1; i <= N; i++ ){
        if(!check[i]){
            b.push_back(i);
            check[i] = true;
            makePermutation(i, b);
            b.pop_back();
            check[i] = false;
        }
    }
}
int main() {
    cin >> N;
    cin >> M;
    check = new bool[N+1];
    vector<int> b;
    makePermutation(0, b);
    return 0;
}