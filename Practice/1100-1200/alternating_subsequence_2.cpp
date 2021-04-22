#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        int num;
        cin >> num;
        long long ans = 0;
        ans += num;
        int temp = num;
        for (int i = 1; i < n; i++){
            scanf("%d", &num);
            if ((temp < 0 && num < 0) || (temp > 0 && num > 0)){
                ans -= temp;
                temp = max(temp, num);
            }
            else {
                temp = num;
            }
            ans += temp;
        }
        printf("%lld\n", ans);
    }
    return 0;
}

