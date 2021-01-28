#include <bits/stdc++.h>

using namespace std;
const int modd = (int)1e9 + 7;

int main(){
    int t;
    cin >> t;
    int n;
    while (t--){
        char ch;
        cin >> n;
        vector <int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> ch;
            if (ch == '-'){arr[i] = -1;}
            else {arr[i] = ch - '0';}
        }
        int dp[n + 1][10];

        for (int i = 0; i < 10; i++){dp[0][i] = 1;}
        for (int i = 0; i < n + 1; i++){dp[i][0] = 0;}

        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= 9; j++){
                if (arr[i - 1] != -1){
                    if (j < arr[i - 1]){dp[i][j] = 0;}
                    else if (j == arr[i - 1]){dp[i][j] = dp[i - 1][j];}
                    else {dp[i][j] = dp[i][arr[i - 1]];}
                }
                else {dp[i][j] = dp[i - 1][j] + dp[i][j - 1];}
                dp[i][j] %= modd;
            }
        }

        if (arr[n - 1] == -1){cout << dp[n][9] << endl;}
        else {cout << dp[n][arr[n - 1]] << endl;}

    }
    return 0;
}
