#include <bits/stdc++.h>
using namespace std;

int N,result;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    for (int i = 0; i < N; i++){
        string a;
        cin >> a;
        stack<char> stk1;
        for (char ch : a)
        {
            if(!stk1.empty()){
                if (ch == stk1.top())
                {
                    stk1.pop();
                }
                else
                {
                    stk1.push(ch);
                }
            }else{
                stk1.push(ch);
            }
                }
        if(stk1.empty()){
            result++;
        }
    }
    cout << result << '\n';
}