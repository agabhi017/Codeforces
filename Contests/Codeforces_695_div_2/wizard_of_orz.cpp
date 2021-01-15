#include <iostream>

using namespace std;

int return_digit(int index){
    int ans;
    if (index == 0 || index == 2){return 9;}
    else if (index == 1){return 8;}
    else {
        ans = (8 + index - 1) % 10;
    }
    return ans;
}

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        for (int i = 0; i < n; i++){
            cout << return_digit(i);
        }
        cout << "\n";
    }

    return 0;
}
