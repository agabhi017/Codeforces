#include <iostream>

using namespace std;

int main (){
    int n;
    cin >> n;
    int cnt = 0, sum;
    int a,b,c;
    for (int i = 0; i < n; i++){
        cin >> a >> b >> c;
        sum = (a + b + c);
        if (sum > 1){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
