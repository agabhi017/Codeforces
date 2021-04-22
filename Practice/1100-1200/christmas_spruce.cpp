#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector <int> children(n, 0);
    vector <int> parent(n);
    vector <int> leaf_children(n, 0);
    parent[0] = 0;
    int num;
    for (int i = 0; i < n - 1; i++){
        scanf("%d", &num);
        parent[i + 1] = num - 1;
        children[num - 1]++;
    }
    for (int i = n - 1; i >= 1; i--){
        if (children[i] == 0){
            leaf_children[parent[i]]++;
        }
    }
    for (int i = 0; i < n; i++){
        if (children[i] > 0 && leaf_children[i] < 3){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
