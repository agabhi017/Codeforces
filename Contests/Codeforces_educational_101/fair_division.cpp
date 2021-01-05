#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    int n;
    while(t--){
        cin >> n;
        int sum_candy = 0;
        int candy;
        int count_1 = 0;
        int count_2 = 0;
        for (int i = 0; i < n; i++){
            cin >> candy;
            if (candy == 1){++count_1;}
            else {++count_2;}
            sum_candy += candy;
        }
        if (count_1 %2 == 0 && count_2 % 2 ==0 || count_1 == 2*count_2){cout << "yes" << endl;}
        else {cout << "no" << endl;}
    }
    return 0;
}
