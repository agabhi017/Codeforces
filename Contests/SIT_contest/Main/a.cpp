#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    int x, y;
    while (t--){
        cin >> x >> y;
        int t1 = (x - 1) * 20;
        int t2 = (y - 1) * 5 + (x - 1) * 5;
        cout << min(t1, t2) << endl;
    }
    return 0;
}
