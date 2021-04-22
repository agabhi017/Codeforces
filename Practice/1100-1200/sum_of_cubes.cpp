#include <bits/stdc++.h>

using namespace std;

const long long N = (long long)1e12;

unordered_set <long long> cubes_n;

void pre_calc(){
    for (long long i = 1; i * i * i <= N; i++){
        cubes_n.insert(i * i * i);
    }
}

int main(){
    int t;
    pre_calc();
    long long x;
    cin >> t;
    while(t--){
        cin >> x;
        bool flag = false;
        for (long long i = 1; i * i * i <= x; i++){
            if (cubes_n.count(x - i * i * i)){
                cout << "YES\n";
                flag = true;
                break;
            }
        }
        if (!flag){cout << "NO\n";}
    }
    return 0;
}
