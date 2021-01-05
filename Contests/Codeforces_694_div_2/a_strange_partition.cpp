#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    int t, n;
    cin >> t;
    float x;
    while (t--){
        cin >> n >> x;
        long long arr[n];
        long long min_sum = 0, max_sum = 0;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            max_sum += (int)ceil((float)arr[i] / x);
        }
        int index = 0;
        long long num;
        while (index < n){
            num = arr[index];
            while (num % (int)x != 0 && index < n - 1){
                num += arr[index + 1];
                ++index;
            }
            min_sum += (int)ceil((float)num / x);
            ++index;
        }
        cout << min_sum << " " << max_sum << endl;
    }
    return 0;
}
