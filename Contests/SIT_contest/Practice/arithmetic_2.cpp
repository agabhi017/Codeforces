#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    int a, b, c;
    while (t--){
        cin >> a >> b >> c;
        vector <int> arr;
        arr.push_back(a);
        arr.push_back(b);
        arr.push_back(c);
        sort(arr.begin(), arr.end());
        if (arr[0] == 0 && arr[1] == 0){arr[0] = arr[2]; arr[2] = 0;}
        if (arr[0] * arr[1] == arr[2]){cout << "YES" << endl; cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;}
        else {cout << "NO" << endl;}
    }
    return 0;
}
