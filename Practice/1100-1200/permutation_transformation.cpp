#include <bits/stdc++.h>

using namespace std;

void solve(vector <int>& vec, vector <int>& arr, int left, int right, int in_height){
    if (left > right || left < 0){return;}
    else if (left == right){vec[left] = in_height;return;}
    int max_index = left;
    for (int i = left + 1; i <= right; i++){
        if (arr[i] > arr[max_index]){max_index = i;}
    }
    vec[max_index] = in_height;
    solve(vec, arr, left, max_index - 1, in_height + 1);
    solve(vec, arr, max_index + 1, right, in_height + 1);
}

int main(){

    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        vector <int> arr(n + 1);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        arr[n] = 0;
        vector <int> ans(n + 1, 0);
        solve(ans, arr, 0, n - 1, 0);
        for (int i = 0; i < n; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
