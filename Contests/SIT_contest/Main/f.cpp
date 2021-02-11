#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, m;
    long long ans = 0;
    cin >> n >> m;
    long long window = m;
    while (window <= n){
        ans += (n - window + 1);
        window += m - 1;
    }
    cout << ans;
    return 0;
}
