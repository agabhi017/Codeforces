#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        vector <int> arr(n);
        vector <int> recur(n + 1, -1);
        for (int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        int ans = INT_MAX;
        for (int i = 0; i < n; i++){
            if (recur[arr[i]] != -1){
                ans = min(ans, i - recur[arr[i]]);
            }
            recur[arr[i]] = i;
        }
        if (ans == INT_MAX){
            printf("%d\n", -1);
        }
        else {
            printf("%d\n", ans + 1);
        }
    }
    return 0;
}
