#include <bits/stdc++.h>
using namespace std;

int car[100];
int price[3];
int sum;
int main()
{
    for (int i = 0; i < 3; i++){
        cin >> price[i];
    }
    for (int i = 0; i < 3; i++){
        int start, end;
        cin >> start;
        cin >> end;
        for (int j = start; j < end; j++){
            car[j]++;
        }
    }

    for(int i : car) {
        switch (i)
        {
        case 1:
            sum += price[0];
            break;
        case 2:
            sum += price[1] *2;
            break;
        case 3:
            sum += price[2] * 3;
            break;
        default:
            break;
        }
    }
    cout << sum << endl;
}