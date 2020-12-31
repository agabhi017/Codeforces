#include <iostream>

using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    long long out = 0;
    if (n % 2 == 0){
        if (k > n/2){out = 2 * (k - n/2);}
        else {out = 2 * k - 1;}
    }
    else {
        if (k > n/2 + 1){out = 2 * (k - n/2 - 1);}
        else {out = 2 * k - 1;}
    }
    cout << out << endl;
    return 0;
}
