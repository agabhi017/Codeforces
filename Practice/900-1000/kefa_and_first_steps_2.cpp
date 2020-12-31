#include <iostream>

using namespace std;

int main(){
    int n, curr, prev;
    cin >> n;
    cin >> prev;
    int length = 1;
    int max_length = 1;
    for (int i = 1; i < n; i++){
        cin >> curr;
        if (curr >= prev){++length;}
        else {
            if(length > max_length){max_length = length;}
            length = 1;
        }
        prev = curr;
    }
    if (length > max_length){max_length = length;}
    cout << max_length << endl;
    return 0;
}
