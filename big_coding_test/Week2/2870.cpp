#include <bits/stdc++.h>
using namespace std;

vector<string> ret;

int N;
string s,temp;

int comp (string a, string b){
    if(a.length() == b.length())
        return a < b;
    return a.length() < b.length();
}
string go(string s){
    while (!s.empty() && s.front() == '0')
    {
        s.erase(0, 1);
    }
    if(s.empty()){
        s += '0';
        return s;
    }
    return s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> s;

        for(char ch : s){
            if(ch < 97) {
                temp += ch;
            } else {
                if(!temp.empty()){
                    ret.push_back(go(temp));
                    temp = "";
                }
            }
        }

        if (!temp.empty())
        {
            ret.push_back(go(temp));
            temp = "";
        }
    }
    sort(ret.begin(), ret.end(), comp);

    for(string s: ret){
        cout << s << "\n";
    }
}