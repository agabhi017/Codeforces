#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    string s;
    char current;
    cin >> n;
    cin >> s;
    int index = 0;
    int s_len = s.length();
    int remove_count = 0;
    while (index < s_len){
        current = s[index];
        while (current == s[index + 1] && index < s_len - 1){
            ++index;
            current = s[index];
            ++remove_count;
        }
        ++index;
    }
    cout << remove_count << endl;
    return 0;
}
