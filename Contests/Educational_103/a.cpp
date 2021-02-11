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
    int n, k;
    while (t--){
        cin >> n >> k;
        int temp = k;
        while ( n > k){
            k += temp;
        }
        int ans = 0;
        ans += k / n;
        if (k % n != 0){++ans;}
        cout << ans << endl;

    }
    return 0;
}
