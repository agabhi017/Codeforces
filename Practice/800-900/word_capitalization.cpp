#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    //if (s[0] >= 97){s[0] = s[0] - 32;}
    s[0] = toupper(s[0]);
    cout << s << endl;
    return 0;
}
