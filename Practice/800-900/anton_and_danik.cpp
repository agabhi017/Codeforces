#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int s_len = s.length();
    int a_count = 0;
    for (int i = 0; i < s_len; i++){
        if (s[i] == 'A'){
            ++a_count;
            --n;
        }
    }
    if (a_count > n){
        cout << "Anton" << endl;
    }
    else if (a_count < n){
        cout << "Danik" << endl;
    }
    else {
        cout << "Friendship" << endl;
    }
    return 0;
}
