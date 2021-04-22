#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, q;
    scanf("%d%d", &n, &q);
    int color;
    vector <int> min_index(50, 1000000);
    for (int i = 0; i < n; i++){
        scanf("%d", &color);
        min_index[color - 1] = min(min_index[color - 1], i);
    }

    while (q--){
        scanf("%d", &color);
        printf("%d ", min_index[color - 1] + 1);
        for (int i = 0; i < 50; i++){
            if (min_index[i] < min_index[color - 1]){
                min_index[i]++;
            }
        }
        min_index[color - 1] = 0;
    }
    return 0;
}
