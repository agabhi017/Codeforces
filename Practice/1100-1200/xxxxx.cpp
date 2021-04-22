#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    int n, x;
    while (t--){
        cin >> n >> x;
        vector <int> arr(n);
        long long sum = 0;
        for (int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        if (sum % x != 0){
            cout << n << endl;
        }
        else {
            int l, r;
            l = -1;
            r = -1;
            for (int i = 0; i < n; i++){
                if (arr[i] % x != 0){
                    l = i;
                    break;
                }
            }
            if (l == -1){
                cout << -1 << endl;
            }
            else {
                for (int i = n - 1; i >= 0; i--){
                    if (arr[i] % x != 0){
                        r = i;
                        break;
                    }
                }
                cout << max ((n - l - 1), r) << endl;
            }
        }
    }

    return 0;
}
