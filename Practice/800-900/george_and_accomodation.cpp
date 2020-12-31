#include <iostream>

using namespace std;

int main(){
    int n, a, b;
    cin >> n;
    int dorm_count = 0;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        if (b - a > 1){++dorm_count;}
    }
    cout << dorm_count << endl;
    return 0;
}
