#include <bits/stdc++.h>
using namespace std;

int alpha[200];
string name, result;
int checkOdd;
char temp;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> name;
    for(char ch : name)
        alpha[ch]++;
    for (int i = 'Z'; i >= 'A' ; i--)
    {
        if(alpha[i]){

            if (alpha[i] & 1)
            {
                temp = char(i);
                checkOdd++;
                if (checkOdd == 2)
                {
                    break;
                }
                --alpha[i];
            }
            if(alpha[i])
            {
                for (int j = 0; j < alpha[i]; j += 2)
                {
                    result += char(i);
                    result = char(i) + result;
                }
            }
        }
    }

    if (checkOdd == 2)
    {
        cout << "I'm Sorry Hansoo" << '\n';
        exit(0);
    }
    else if(temp){
        result.insert(result.size() / 2, 1, temp);
    }
    cout << result << '\n';
}