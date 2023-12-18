#include <iostream>
using namespace std;

int N, M, J, my, cnt;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    my = 1;
    cin >> N >> M >> J;
    for (int i = 0; i < J; i++){
        int apple;
        cin >> apple;
        if(my <= apple && my+M-1 >= apple){
            continue;
        } else if (my+M-1 < apple)
        {
            for (int j = my + M; j <= apple; my++,j++){
                cnt++;
            }
        } else if (my > apple)
        {
            for (int j = my-1; j >= apple; my--,j--){
                cnt++;
            }
        }        
    }
    cout << cnt << "\n"; 
}