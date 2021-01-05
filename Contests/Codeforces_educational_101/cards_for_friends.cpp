#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    int w, h, n;
    int n_pieces;
    int area;
    while (t--){
        cin >> w >> h >> n;
        n_pieces = 1;
        area = w*h;
        while (area % 2 == 0){
            n_pieces *= 2;
            area = area/2;
        }
        if (n_pieces >= n){cout << "YES" << endl;}
        else {cout << "NO" << endl;}
    }
    return 0;
}
