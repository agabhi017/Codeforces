#include <iostream>
#include <string>
#include <algorithm>
//#include "contest_template_1.h"

using namespace std;

int main(){
    long long n;
    cin >> n;
    int n1;
    long long answer_array[n];
    for (int i = 0; i < n; i++){
        cin >> n1;
        long long temp_arr[n1];
        for (int j = 0; j < n1; j++){
            cin >> temp_arr[j];
        }
        long long prev, curr;
        prev = temp_arr[0];
        for (int j = 1; j < n1; j++){
            curr = temp_arr[j];
            if (curr <= prev){temp_arr[j] += 1;}
            prev = temp_arr[j];
        }
        sort(temp_arr, temp_arr + n1);
        int dist_count = 1;
        prev = temp_arr[0];
        for (int j = 1; j < n1; j++){
            curr = temp_arr[j];
            if (curr > prev){++dist_count;}
            prev = curr;
        }
        answer_array[i] = dist_count;
    }
    for (int i = 0; i < n; i++){
        cout << answer_array[i] << endl;
    }
    return 0;
}
