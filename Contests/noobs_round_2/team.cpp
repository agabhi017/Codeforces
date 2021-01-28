#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    int n, k;
    while (t--){
        cin >> n >> k;
        vector <int> skills(n);
        for (int i = 0; i < n; i++){
            cin >> skills[i];
        }
        sort(skills.begin(), skills.end());
        int i = 0, j = n - 1;
        int ans = 0;
        while (i <= j){
            if (i == j){
                if (skills[i] >= k){
                    ++ans;
                }
                ++i;
                break;
            }
            else {
                if (skills[i] >= k){
                    ++ans;
                    ++i;
                }
                if (skills[j] >= k){
                    ++ans;
                    --j;
                }
                if (skills[i] < k && skills[j] < k && i < j){
                    if (skills[i] + skills[j] >= k){
                        ++ans;
                        --j;
                    }
                    ++i;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
