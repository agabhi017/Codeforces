#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int arr_sum = 0;
    int twin_sum = 0;
    int index = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        arr_sum += arr[i];
    }
    sort(arr, arr + n, greater<int>());
    twin_sum = arr[0];
    while (twin_sum <= arr_sum / 2 && index < n){
        ++index;
        twin_sum += arr[index];
    }
    cout << index + 1 << endl;
    return 0;
}
