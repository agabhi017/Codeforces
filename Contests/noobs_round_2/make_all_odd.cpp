#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    int n;
    while(t--){
        cin >> n;
        int c_odd = 0, c_even = 0;
        int num;
        for (int i = 0; i < n; i++){
            cin >> num;
            if (num % 2 == 0){c_even ++;}
            else {c_odd ++;}
        }
        if (c_odd == 0){cout << -1 << endl;}
        else if (c_even == 0){cout << 0 << endl;}
        else {cout << c_even << endl;}
    }
    return 0;
}
