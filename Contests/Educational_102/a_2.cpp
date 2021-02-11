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
    int n, d;
    while (t--){
        cin >> n >> d;
        int cnt = 0;
        vector <int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];

            if (arr[i] > d){++cnt;}
        }
        sort(arr.begin(), arr.end());
        int temp = arr[0] + arr[1];

        if (cnt > 0){
            if (temp <= d){cout << "YES" << endl;}
            else {cout << "NO" << endl;}
        }
        else if (cnt == 0){cout << "YES" << endl;}

    }
    return 0;
}
