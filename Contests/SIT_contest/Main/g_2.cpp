#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector <long long> arr(s.length(), 0);

    for (int i  = 0; i < s.length(); i++){
        arr[i] = 1;
    }

    long long ans = arr[s.length() - 1];
    int index = 1;


    vector <long long> arr_2(s.length(), 1);

    while (index < n){
        for (int i = 1; i < s.length(); i++){
            arr_2[i] = arr_2[i - 1] + arr[i - 1];
        }
        ans += arr_2[s.length() - 1];
        arr = arr_2;
        fill(arr_2.begin(), arr_2.end(), 1);
        ++index;
    }
    cout << ans;
    return 0;
}
