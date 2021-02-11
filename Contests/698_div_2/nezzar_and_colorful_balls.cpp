#include <bits/stdc++.h>

using namespace std;

const int N = 105;
vector <int> arr(N);

int main(){
    int t;
    cin >> t;
    int n;
    while(t--){
        cin >> n;
        fill(arr.begin(), arr.end(), 0);
        int num;
        for (int i = 0; i < n; i++){
            cin >> num;
            arr[num]++;
        }
        sort(arr.begin(), arr.end());
        cout << arr[N - 1] << endl;
    }
    return 0;
}
