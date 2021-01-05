#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t, n, x;
    cin >> t;
    while(t--){
        cin >> n >> x;
        long long arr[n];
        int flag = 1;
        long long final_sum = 0;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        long long counter = 1;
        long long num;
        while (flag){
            for (int i = 0; i < n; i++){
                num = arr[i]/ counter;
                if (num % x == 0){final_sum += arr[i];}
                else {flag = 0; break;}
            }
            if (flag == 0){break;}
            else {counter *= x;}
        }
        for (int i = 0; i < n; i++){final_sum += arr[i];}
        cout << final_sum << endl;
    }
    return 0;
}
