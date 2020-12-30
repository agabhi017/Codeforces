#include <iostream>

using namespace std;

int main(){
    int a = -1, b = -1;
    int n;
    int steps = 0;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> n;
            if (n == 1){
                a = i;
                b = j;
                break;
            }
        }
    }
    if (a > 2){
        steps += a - 2;
    }
    else {
        steps += 2 - a;
    }
    if (b > 2){
        steps += b - 2;
    }
    else {
        steps += 2 - b;
    }
    cout << steps << endl;
    return 0;
}
