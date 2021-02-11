#include <bits/stdc++.h>

using namespace std;

int _gcd_(int a, int b){
    if (a == 0){
        return b;
    }
    else {return _gcd_(b, a % b);}
}

int _lcm_(int a, int b){
    return a * b / _gcd_ (a, b);
}

const int modd = (int)1e9 + 7;

int main(){
    int t;
    cin >> t;
    long long n, k;
    while (t--){
        cin >> n >> k;
        vector <long long> prices(n);
        vector <long long> expected_inf(n);
        vector <long long> cumm_price(n);
        for (int i = 0; i < n; i++){
            cin >> prices[i];
            if (i > 0){expected_inf[i] = (long long)ceil((long double)prices[i] * 100 / k);}
            else {expected_inf[i] = prices[i];}
        }
        cumm_price[0] = 0;
        cumm_price[1] = prices[0];
        for (int i = 2; i < n; i++){cumm_price[i] = prices[i - 1] + cumm_price[i - 1];}
        long long diff = 0;
        for (int i = 1; i < n; i++){
            //cout << cumm_price[i] << " " << expected_inf[i] << endl;
            if (cumm_price[i] + diff < expected_inf[i]){
                diff += expected_inf[i] - cumm_price[i] - diff;
            }
        }
        cout << diff << endl;
    }
    return 0;
}
