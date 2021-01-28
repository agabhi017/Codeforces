#include <bits/stdc++.h>

using namespace std;

const long long N = (int)1e6 + 5;
vector <long long> freq(N, -1);

int main(){
    int t;
    cin >> t;
    int n, k;
    while(t--){
        cin >> n >> k;
        vector <int> items(n);
        for (int i = 0; i < n; i++){
            cin >> items[i];
            freq[items[i]] = 0;
        }
        int ans = 0, l = 0, cost = 0;
        for (int r = 0; r < n; r++){
            if (freq[items[r]] == 0){
                cost += items[r];
            }
            freq[items[r]] ++;
            while (cost > k){
                freq[items[l]]--;
                if (freq[items[l]] == 0){
                    cost -= items[l];
                }
                l++;
            }
            ans = max(ans, r - l + 1);
        }
        cout << ans << endl;
    }
    return 0;
}
