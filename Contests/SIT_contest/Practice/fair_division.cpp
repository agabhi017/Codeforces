#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    long long num, rem;
    while (t--){
        cin >> num;
        rem = (num - 3) / 3;
        if ((num - 3) >= 0 && (num - 3) % 3 == 0){
            cout << rem << " " << rem  + 1 << " " << rem + 2 << endl;
        }
        else {cout << -1 << endl;}
    }

    return 0;
}
