#include <bits/stdc++.h>

using namespace std;

int main(){
    int t0, t1, t2;
    cin >> t0 >> t1 >> t2;
    int ans;
    ans = abs(t1 - t0) + abs(t2 - t1);
    ans = min(ans, abs(t2 - t0) + abs(t2 - t1));
    cout << ans;
    return 0;
}
