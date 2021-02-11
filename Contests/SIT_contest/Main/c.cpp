#include <bits/stdc++.h>

using namespace std;

bool isprime(unsigned long long n){
    if (n <= 3){
        return n > 1;
    }
    else if (n % 2 == 0 || n % 3 == 0){
        return false;
    }
    unsigned long long i = 5;
    while (pow(i, 2) <= n){
        if (n % i == 0 || n % (i + 2) == 0){return false;}
        i += 6;
    }
    return true;
}

int main(){
    int t;
    unsigned long long n, m, p;
    cin >> t;
    while (t--){
        cin >> n >> m >> p;
        //if (p > n * m){cout << n * m << endl;cout << "NO" << endl;}
        //else if (p == n * m){cout << n * m << endl; cout << "YES" << endl;}
        if (p <= n || p <= m){cout << "YES" << endl;}
        else if (p > n && p > m && !isprime(p)){cout << "YES" << endl;}
        else {cout << "NO" << endl;}
    }
    return 0;
}

