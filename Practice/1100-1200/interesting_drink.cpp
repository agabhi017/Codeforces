#include <bits/stdc++.h>

using namespace std;

int my_binary_search(vector <int> &arr, int l, int r, int query){
    if (r < l){
        return -1;
    }
    int m = (l + r) / 2;
    if (r == l && query == arr[m]){
        return m;
    }
    else if (query >= arr[m]){return max(m, my_binary_search(arr, m + 1, r, query));}
    else {return my_binary_search(arr, l, m - 1, query);}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    vector <int> cost(n);
    for (int i = 0; i < n; i++){
        cin >> cost[i];
    }
    sort(cost.begin(), cost.end());
    int q;
    cin >> q;
    int money, index_match;
    for (int i = 0; i < q; i++){
        cin >> money;
        index_match = my_binary_search(cost, 0, n - 1, money);
        cout << index_match + 1 << endl;;
    }
    return 0;
}
