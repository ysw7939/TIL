#include<bits/stdc++.h>
using namespace std;

int N, M,result;
vector<int> v;

int main(){
    cin >> N >> M;
    for (int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    for (int i = 0; i < N; i++){
        for (int j = i+1; j < N; j++){
            if (M== v[i] + v[j]){
                result++;
            }
        }
    }

        cout << result << '\n';
}