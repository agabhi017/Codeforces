#include <iostream>
#include <string>
//#include <boost/math/common_factor.hpp>

using namespace std;

int gcd(int a, int b){
    if (b == 0){return a;}
    else {return gcd(b, a % b);}
}

int lcm(int a, int b){
    return a * b/ gcd(a, b);
}

int main(){
    int t;
    cin >> t;
    while (t--){
        string a, b;
        cin >> a >> b;
        int a_len = a.length();
        int b_len = b.length();
        int min_len;
        if (a_len < b_len){min_len = a_len;}
        else {min_len = b_len;}
        int flag = 0;
        int a_index, b_index;
        int lcmm = lcm(a_len, b_len);;
        for (int i = 0; i < lcmm; i++){
            a_index = i % a_len;
            b_index = i % b_len;
            if (a[a_index] != b[b_index]){flag = 1; break;}
        }
        if (flag == 0){
            int index;
            for (int i = 0; i < lcmm; i++){
                index = i % a_len;
                cout << a[index];
            }
            cout << "\n";
        }
        else {cout << -1 << endl;}

    }
    return 0;
}
