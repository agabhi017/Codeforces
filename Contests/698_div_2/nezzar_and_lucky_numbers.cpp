#include <bits/stdc++.h>

using namespace std;

const int N = (int)1e9 + 1;

int check_7(int num){
    int ans = 0;
    while (num > 0){
        if (num % 10 == 7){
            ans = 1;
            break;
        }
        else {num = num / 10;}
    }
    return ans;
}

int main(){
    vector <int> lucky_check(N);
    vector <int> lucky_num;

    for (int i = 0; i < N; i++){
        lucky_check[i] = check_7(i);
        if (lucky_check[i] == 1){lucky_num.push_back(i);}
    }
    for (int i = 0; i < 100; i++){cout << lucky_num[i] << endl;}

    for (int i = 0; i < N; i++){
        if (!lucky_check[i]){
            int j = 0;
            while (j < lucky_num.size() && !lucky_check[i]){
                if (i - lucky_num[j] >= 0){
                    lucky_check[i] = max(lucky_check[i], lucky_check[i - lucky_num[j]]);
                }
                ++j;
            }
        }
    }

    int t, n, k;
    cin >> t;
    while (t--){
        cin >> n >> k;
        int num;
        for (int i = 0; i < n; i++){
            cin >> num;
            cout << lucky_check[num] << "\n";
        }
    }
    return 0;
}
