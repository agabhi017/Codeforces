#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        stack <int> st_;
        int num;
        cin >> num;
        st_.push(num);
        for (int i = 1; i < n; i++){
            scanf("%d", &num);
            if ((st_.top() < 0 && num < 0) || (st_.top() > 0 && num > 0)){
                int temp = st_.top();
                st_.pop();
                st_.push(max(temp, num));
            }
            else {
                st_.push(num);
            }
        }
        long long ans = 0;
        while (!st_.empty()){
            ans += st_.top();
            st_.pop();
        }
        printf("%lld\n", ans);
    }
    return 0;
}
