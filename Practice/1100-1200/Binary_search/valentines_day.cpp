#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >>t;
    while (t--){
        int sz;
        cin >> sz;
        int arr[sz];
        int frwrd[sz], bckwrd[sz];
        fill_n(frwrd, sz, 0);
        fill_n(bckwrd, sz, 0);
        for (int i = 0; i < sz; i++){
            cin >> arr[i];
        }
        frwrd[0] = arr[0];
        bckwrd[sz - 1] = arr[sz - 1];
        for (int i = 1; i < sz; i++){
            frwrd[i] += frwrd[i - 1] + arr[i];
            //cout << frwrd[i] << endl;
        }
        for (int i = sz - 2; i >= 0; i--){
            bckwrd[i] = bckwrd[i + 1] + arr[i];
            //cout << bckwrd[i] << endl;
        }
        int max_frwrd_index = 0, max_bckwrd_index = sz - 1;
        int max_frwrd = frwrd[0], max_bckwrd = bckwrd[sz - 1];
        for (int i = 0; i < sz; i++){
            if (frwrd[i] >= max_frwrd){
                max_frwrd = frwrd[i];
                max_frwrd_index = i;
            }
        }
        for (int i = sz - 1; i >= 0; i--){
            if (bckwrd[i] >= max_bckwrd){
                max_bckwrd = bckwrd[i];
                max_bckwrd_index = i;
            }
        }
        //cout << max_frwrd_index << " " << max_bckwrd_index << endl;
        int ans = 0;
        if (max_bckwrd_index <= max_frwrd_index){
            for (int i = max_bckwrd_index; i <= max_frwrd_index; i++){
                ans += arr[i];
            }
        }
        else {
            ans = max(arr[max_bckwrd_index], arr[max_frwrd_index]);
        }
        cout << ans << endl;
    }
    return 0;
}
