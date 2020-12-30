#include <iostream>

using namespace std;

int main(){
    int n, pass_count = 0;
    cin >> n;
    int arr[n];
    int a,b;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        pass_count += b - a;
        arr[i] = pass_count;
    }
    int min_cap = arr[0];
    for (int i = 0; i < n; i++){
        if (arr[i] > min_cap){
            min_cap = arr[i];
        }
    }
    cout << min_cap << endl;
    return 0;
}
