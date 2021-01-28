#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    int a, b;
    cin >> t;
    while (t--){
        cin >> a >> b;
        if ((a^b) == (a + b)){cout << "NO\n";}
        else {cout << "YES\n";}
    }
    return 0;
}
