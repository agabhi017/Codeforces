#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max_length = 1, index = 0;
    int length = 1;
    while (index < n){
        length = 1;
        while (index < n - 1 && arr[index + 1] >= arr[index]){
            ++length;
            ++index;
        }
        if (length > max_length) {max_length = length;}
        ++index;
    }
    cout << max_length << endl;
    return 0;
}
