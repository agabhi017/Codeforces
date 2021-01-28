#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    int n;
    while (t--){
        cin >> n;
        int ans = 0;
        int r = n % 2020;
        if ((n - r * 2021) % 2020 == 0 && (n - r * 2021) >= 0){++ans;}
        if (ans > 0){cout << "YES" << "\n";}
        else {cout << "NO" << "\n";}

    }
    return 0;
}
