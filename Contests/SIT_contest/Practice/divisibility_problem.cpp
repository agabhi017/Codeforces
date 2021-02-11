#include <bits/stdc++.h>

using namespace std;

int generate_num(int n, long long a){
    long long ans = 0;
    long long mul = 1;
    for (int i = 0; i < n; i++){
        ans += a * mul;
        mul *= 10;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    long long max_num = generate_num(n, 2);
    long long min_num = generate_num(n, 1);
    min_num += 1;
    const long long fact = (long long)pow(2, n);
    long long ans = min_num;
    long long mul = 10;

    int index = 0;
    int flag = 0;
    while (index < n){
        if (ans / fact >= 1 && ans % fact == 0){
            flag = 1;
            break;
        }
        ans += mul;
        cout << ans << endl;
        mul *= 10;
        ++index;
    }
    if (flag == 1){cout << ans << endl;}
    else {cout << -1 << endl;}
    return 0;
}
