#include <iostream>
using namespace std;

int main(){
    int n, index;
    cin >> n >> index;
    int arr[n];
    int final_count = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        if (arr[i] >= arr[index - 1] && arr[i] > 0){
            final_count++;
        }
    }
    cout << final_count << endl;
    return 0;
}
