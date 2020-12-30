#include <iostream>

using namespace std;

int main(){
    int k, n, w;
    cin >> k >> n >> w;
    int req_money = k * w * (w + 1)/2;
    if (req_money - n > 0){cout << req_money - n << endl;}
    else {cout << 0 << endl;}
    return 0;
}
