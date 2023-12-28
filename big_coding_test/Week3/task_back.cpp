#include<bits/stdc++.h>
using namespace std;

int n, arr[104], ret;

void go(int idx, int sum){
    if (ret == 10)
    {
        return;
    }
    if(idx == n){
        ret = max(ret, sum % 11);
    }
    
    go(idx+1, sum);
    go(idx + 1, sum + arr[idx]);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

}