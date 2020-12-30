#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    int s_len = s.length();
    int count_up = 0, count_lo = 0;
    for (int i = 0; i < s_len; i++){
        if (s[i] >= 97){
            ++count_lo;
        }
        else {
            ++count_up;
        }
    }
    if (count_lo >= count_up){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    cout << s << endl;
    return 0;
}


