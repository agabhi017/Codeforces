#include <bits/stdc++.h>

using namespace std;

//const int rows = 10001;
//const int columns = 10017;
//int dp[rows][columns];

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int s_len = s.length();
    int colum = s_len + n - 1;

    int** dp = new int* [n];
    for (int i = 0; i < n; i++){
        dp[i] = new int[colum];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < colum; j++){
            dp[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1 && j < colum; j++){
            dp[i][j] = -1;
        }
        for (int j = colum - i; j < colum; j++){
            dp[i][j] = -1;
        }
        dp[i][n - i - 1] = 1;
    }
    for (int j = n - 1; j < colum; j++){
        dp[0][j] = 1;
    }

    for (int i = 1; i < n; i++){
        for (int j = 0; j < colum; j++){
            if (dp[i][j] == 1 || dp[i][j] == -1){continue;}
            else {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
    }

    long long ans = 0;
    for (int i = 0; i < n; i++){
        ans += dp[i][colum - i - 1];
    }
    cout << ans;
    delete dp;
    return 0;
}
