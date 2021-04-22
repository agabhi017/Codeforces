#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);
        long long arr[n], arr_scores[n] = {};
        for (int i = 0; i < n; i++){
            scanf("%lld", &arr[i]);
        }
        long long ans = 0;
        long long curr_score = 0;
        for (long long i = 0; i < n; i++){
            curr_score = arr_scores[i] + arr[i];
            if (curr_score > ans)   {ans = curr_score;}
            if (i + arr[i] < n && curr_score > arr_scores[i + arr[i]]){
                arr_scores[i + arr[i]] = curr_score;
            }
        }
        printf("%lld\n", ans);
    }

    return 0;
}
