#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t, n, m;
    cin >> t;
    while (t--){
        cin >> n >> m;
        int frnds[n];
        long long cost = 0;
        long long gifts[m];
        int gift_c[m] = {0};
        for (int i = 0; i < n; i++){
            cin >> frnds[i];
        }
        for (int i = 0; i < m; i++){
            cin >> gifts[i];
        }
        sort(frnds, frnds + n);
        long long min_value;
        int index;
        int min_index;
        for (int i = n - 1; i >= 0; i--){
            index = frnds[i];
            min_value = gifts[m - 1] + 1;
            min_index = -1;
            for (int j = 0; j < index; j++){
                if (gift_c[j] == 0 && gifts[j] < min_value){
                    min_value = gifts[j];
                    min_index = j;
                }
            }
            if (min_index == -1){cost += gifts[index - 1];}
            else {cost += min_value; gift_c[min_index] = 1;}
        }
        cout << cost << endl;

    }
    return 0;
}
