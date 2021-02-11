#include <bits/stdc++.h>

using namespace std;

int _gcd_(int a, int b){
    if (a == 0){
        return b;
    }
    else {return _gcd_(b, a % b);}
}

int _lcm_(int a, int b){
    return a * b / _gcd_ (a, b);
}

const int modd = (int)1e9 + 7;

int main(){
    int t;
    cin >> t;
    int a, b;
    string s;
    while (t--){
        cin >> a >> b;
        cin >> s;
        int x_pos = 0, y_pos = 0, x_neg = 0, y_neg = 0;
        for (int i = 0; i < (int)s.length(); i++){
            if (s[i] == 'D'){++y_neg;}
            else if (s[i] == 'U'){++y_pos;}
            else if (s[i] == 'R'){++x_pos;}
            else {++x_neg;}
        }
        int flag_x = 0, flag_y = 0;
        if (a >= 0 && x_pos >= a){
            flag_x = 1;
        }
        else if (a <= 0 && x_neg >= -1* a){
            flag_x = 1;
        }

        if (b >= 0 && y_pos >= b){
            flag_y = 1;
        }
        else if (b <= 0 && y_neg >= -1* b){
            flag_y = 1;
        }

        if (flag_x && flag_y){cout << "YES" << endl;}
        else {cout << "NO" << endl;}
    }
    return 0;
}
