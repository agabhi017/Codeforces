#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int s_len = s.length();
    int index  = 0;
    int streak = 1;
    while (index < s_len){
        streak = 1;
        while (index < s_len - 1 && s[index] == s[index + 1]){
            ++streak;
            ++index;
            if (streak == 7){break;}
        }
        if (streak == 7){break;}
        ++index;
    }
    if (streak == 7){cout << "YES" << endl;}
    else {cout << "NO" << endl;}
    return 0;
}
