#include <bits/stdc++.h>
#include <map>

using namespace std;

const long long modd = (int)1e9 + 7;
int main(){
    int t;
    cin >> t;
    int n, k;
    while (t--){
        cin >> n >> k;
        map <int, int> map_;
        set <int> my_set;
        vector <int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            map_[arr[i]] += 1;
            my_set.insert(arr[i]);
        }
        int index = 0;
        long long ans = 0;
        while (index <= k){
            auto itr = my_set.end();
            int cnt = map_[*itr];
            index += cnt;
            if (index > k){
                ans =
            }
        }
        for (auto itr = my_set.begin(); itr != my_set.end(); ++itr){
            cout <<*itr<<",";
        }
        cout << endl;
        for (int i = 0; i < n; i++){
            cout << map_[arr[i]] << " ";
        }
        cout << endl;
    }
    return 0;
}
