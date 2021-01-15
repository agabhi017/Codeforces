#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t, n, d;
    cin >> t;
    while (t--){
        cin >> n >> d;
        vector <int> arr1;
        arr1.resize(n);
        vector <int> arr2;
        arr2.resize(n);
        for (int i = 0; i < n; i++){
            cin >> arr1[i];
            arr2[i] = arr1[i];
        }
        sort(arr2.begin(), arr2.end());
        int flag = 0;
        for (int i = 0; i < n; i++){
            int temp = arr2[0] + arr2[1];
            if (arr1[i] > d && temp > d){flag = -1; break;}
        }
        if (flag == 0){cout << "YES" << endl;}
        else {cout << "NO" << endl;}
    }
    return 0;
}
