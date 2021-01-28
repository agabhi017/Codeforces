#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    int n;
    while (t--){
        cin >> n;
        vector <int> arr(n);
        for (int i = 0; i < n; i++){cin >> arr[i];}

        int max_el = *max_element(arr.begin(), arr.end());

        vector <int> arr_count(max_el + 1, 0);
        for (int i = 0; i < n; i++){arr_count[arr[i]] += 1;}

        vector <int> dp_arr(max_el + 1, 0);
        for (int i = 1; i <= max_el; i++){
            dp_arr[i] += arr_count[i];
            for (int j = 2 * i; j <= max_el; j += i){
                dp_arr[j] = max(dp_arr[j], dp_arr[i]);
            }
        }
        cout << n - *max_element(dp_arr.begin(), dp_arr.end()) << "\n";
    }
    return 0;
}
