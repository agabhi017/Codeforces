#include <iostream>
#include <string>

using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    int a_len = a.length();
    int temp;
    for (int i = 0; i < a_len/2; i++){
        temp = a[i];
        a[i] = a[a_len - i - 1];
        a[a_len - i - 1] = temp;
    }
    if (a == b){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
