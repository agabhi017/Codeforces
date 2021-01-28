#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    int n;
    while (t--){
        cin >> n;
        int ans = 0;
        char ch;
        for (int i = 0; i < n; i++){
            cin >> ch;
            if (ch == '0'){++ans;}
            else {ans += 3;}
        }
        if (ans % 4 == 0){cout << "E\n";}
        else if (ans % 4 == 1){cout << "S\n";}
        else if (ans % 4 == 2){cout << "W\n";}
        else {cout << "N\n";}
    }
    return 0;
}
