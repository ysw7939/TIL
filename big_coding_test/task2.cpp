#include <iostream>
#include <string.h>
using namespace std;


class String
{
public:
    String() {
        strData = NULL;
        len = 0;
    }
    String(const char *str){
        len = strlen(str);
        strData = new char[len + 1];
        strcpy(strData, str); // 깊은 복사
    }
    String(const String &rhs) {
        cout << "나 부름?" << endl;
        len = rhs.len;
        strData = new char[len + 1];
        strcpy(strData, rhs.strData);
    }
    String &operator=(const String &rhs){
        if(this != &rhs){
            len = rhs.len;
            delete[] strData;
            strData = new char[len + 1];
            strcpy(strData, rhs.strData);
        }
        return *this;
    }
    ~String() {
        if(strData){
            delete[] strData;
        }
    }

    const char *GetStrData() const {
        if (strData)
            return strData;
        return "";
    }
    int GetLen() const {
        return len;
    }

private:
    char *strData;
    int len;
};

int main() {
    String s2("Hello");
    String s3;
    s3 = s2;

    cout << s2.GetLen() << endl;
    cout << s2.GetStrData() << endl;

    cout << s3.GetLen() << endl;
    cout << s3.GetStrData() << endl;
}