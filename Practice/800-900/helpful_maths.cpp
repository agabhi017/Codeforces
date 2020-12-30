#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int s_len = s.length();
    int count_1 = 0;
    int count_2 = 0;
    int count_3 = 0;
    for (int i = 0; i < s_len; i++){
        switch(s[i]){
            case '1' : count_1++; break;
            case '2' : count_2++; break;
            case '3' : count_3++; break;
        }
    }
    for (int i = 0; i < s_len; i++) {
        if (s[i] == '+');
        else {
            if (count_1 > 0){
                s[i] = '1';
                --count_1;
            }
            else if (count_2 > 0){
                s[i] = '2';
                --count_2;
            }
            else if (count_3 > 0){
                s[i] = '3';
                --count_3;
            }
        }

    }
    cout << s << endl;
    return 0;
}
