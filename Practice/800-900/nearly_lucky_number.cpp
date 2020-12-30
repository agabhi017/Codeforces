#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int s_len = s.length();
    int lucky_count = 0;
    for (int i = 0; i < s_len; i++){
        if (s[i] == '4' || s[i] == '7'){
            ++lucky_count;
        }
    }
    if (lucky_count == 4 || lucky_count == 7){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;

}
