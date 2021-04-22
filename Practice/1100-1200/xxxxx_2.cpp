#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    int n, x;
    while (t--){
        cin >> n >> x;
        long long sum = 0;
        int first_i = INT_MAX;
        int last_i = 0;
        int num;
        for (int i = 0; i < n; i++){
            scanf("%d", &num);
            sum += num;
            if (num % x != 0){
                first_i = min(first_i, i);
                last_i = max(last_i, i);
            }
        }
        if (sum % x != 0){
            printf("%d\n", n);
        }
        else if (last_i == 0){
            printf("%d\n", -1);
        }
        else {
            printf("%d\n", max((n - first_i - 1), last_i));
        }
    }
    return 0;
}
