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
        vector <int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int i = 0;
        int flag = 0;
        while(k-- ){
            i = 0;
            while (arr[i] >= arr[i + 1] && i < n - 1){
                ++i;
                if (i == n - 1){
                    flag = 1;
                    break;
                }
            }
            if (flag == 1){break;}
            arr[i] += 1;
            //for (int i = 0; i < n; i++){cout << arr[i] << " ";}
            //cout << endl;
        }
        if (flag == 1){cout << -1 << endl;}
        else {cout << i + 1 << endl;}
    }
    return 0;
}
