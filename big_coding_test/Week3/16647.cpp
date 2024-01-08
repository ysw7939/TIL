#include <iostream>
#include <vector>
using namespace std;

int n;
string s;
vector<int> num;
vector<char> oper;
int ret = -987654321;

int calculator(char oper, int a, int b)
{
    if (oper == '+')
        return a + b;
    if (oper == '-')
        return a - b;

    return a * b;
}

void go(int here, int _num)
{
    if (here == num.size() - 1)
    {
        ret = max(_num, ret);
        return;
    }

    go(here + 1, calculator(oper[here], _num, num[here + 1]));

    if(here+2 <= num.size()-1){
        int temp = calculator(oper[here + 1], num[here + 1], num[here + 2]);
        go(here + 2, calculator(oper[here], _num, temp));
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    cin >> s;
    for (char ch : s)
    {

        if ('0' <= ch && ch <= '9')
        {
            num.push_back(ch - '0');
        }
        else
        {
            oper.push_back(ch);
        }
    }
 
    go(0, num[0]);
    cout << ret << '\n';
    return 0;
}