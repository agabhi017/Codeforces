#include <bits/stdc++.h>

using namespace std;

int my_binary_search(long long arr[], int l, int r, int query){
    if (l > r){
        return -1;
    }
    int m = (l + r)/2;
    if (l == r && query == arr[m]){
        return m;
    }
    else if (query >= arr[m]){return max(m, my_binary_search(arr, m + 1, r, query));}
    else {return my_binary_search(arr, l, m - 1, query);}
}

int main(){
    int t;
    cin >> t;
    int cards, max_size;
    max_size = (int)sqrt(1000000000);
        long long arr[max_size];
        for (int i = 1; i < max_size; i++){
            arr[i - 1] = (long long)((i * (i + 1) + (i * (i - 1)/2)));
        }
    while (t--){
        cin >> cards;
        int n_cards, n_pyram = 0;

        int index;
        index = my_binary_search(arr, 0, max_size - 1, cards);
        if (index >= 0){
            n_pyram++;
            n_cards = arr[index];
        }
        cards -= n_cards;
        while (cards > 0){
            index = my_binary_search(arr, 0, max_size - 1, cards);
            if (index >= 0){
                n_pyram++;
                n_cards = arr[index];
            }
            cards -= n_cards;
        }
        cout << n_pyram << endl;
    }

    return 0;
}
