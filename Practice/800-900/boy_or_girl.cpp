#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int s_len = s.length();
    int arr[26];
    for (int i = 0; i < 26; i++){
        arr[i] = 0;
    }
    for (int i = 0; i < s_len; i++){
        if (arr[s[i] - 97] == 0){
            arr[s[i] - 97] = 1;
        }
    }
    int sum = 0;
    for (int i = 0; i < 26; i++){
        sum += arr[i];
    }
    if (sum %2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
