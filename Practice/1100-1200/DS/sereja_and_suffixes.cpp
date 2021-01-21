#include <bits/stdc++.h>

using namespace std;


void solve_brute(int a, int b){
    int arr[a];
    for (int i = 0; i < a; i++){
        cin >> arr[i];
    }
    int arr_size[a];
    set <int> unique_n;
    for (int i = a - 1; i >= 0; i--){
        unique_n.insert(arr[i]);
        arr_size[i] = unique_n.size();
    }
    int index;
    for (int i = 0; i < b; i++){
        cin >> index;
        cout << arr_size[index - 1] << endl;
    }

}

void solve_brute_2(int a, int b){
    int arr[a];
    for (int i = 0; i < a; i++){
        cin >> arr[i];
    }
    int arr_size[a];
    map <int, int> unique_n;
    for (int i = a - 1; i >= 0; i--){
        unique_n[arr[i]]++;
        arr_size[i] = unique_n.size();
    }
    int index;
    for (int i = 0; i < b; i++){
        cin >> index;
        cout << arr_size[index - 1] << endl;
    }

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n, m;
    cin >> n >> m;
    solve_brute_2(n, m);
    return 0;
}
