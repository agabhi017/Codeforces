#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int s_len = s.length();
    int flag = 0;
    for (int i = 0; i < s_len; i++){
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            flag = 1;
            break;
        }
    }
    if (flag == 1){cout << "YES" ;}
    else {cout << "NO" ;}
    return 0;
}
