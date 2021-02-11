#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int price[3];
        int wght[3];
        cin >> price[0] >> price[1] >> price[2];
        cin >> wght[0] >> wght[1] >> wght[2];
        sort(price, price + 3);
        sort(wght, wght + 3);
        int ans = price[0] * wght[0] + price[1]* wght[1] + price[2] * wght[2];
        cout << ans << endl;
    }
    return 0;
}
