#include <iostream>
#include <string>
#include <algorithm>
#include "contest_template_1.h"

using namespace std;

int main(){
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long answer = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            for (int k = 0; k < n; k++){
                answer+= (arr[i] & arr[j]) * (arr[j] | arr[k]);
            }
        }
    }
    cout << answer;
    return 0;
}
