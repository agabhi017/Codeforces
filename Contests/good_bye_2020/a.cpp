#include <iostream>
#include <string>
#include <algorithm>
//#include "contest_template_1.h"

using namespace std;

int main(){
    int n;
    int p;
    cin >> n;
    int answer_arr[n] = {0};
    for (int i = 0; i < n; i ++){
        cin >> p;
        int temp_arr[p];
        int temp_area = 0;
        int temp_area_arr[p*(p-1)/2] = {0};
        for (int j = 0; j < p; j++){
            cin >> temp_arr[j];
        }
        int index = 0;
        for (int i = 0; i < p; i++){
            for (int j = i + 1; j < p; j++){
                temp_area_arr[index] = (temp_arr[j] - temp_arr[i]);
                ++index;
            }
        }
        sort(temp_area_arr, temp_area_arr + p*(p-1)/2);
        int prev, curr;
        prev = temp_area_arr[0];
        int dist_count;
        if (p < 2){dist_count = 0;}
        else {dist_count = 1;}
        for(int i = 1; i < p*(p-1)/2; i++){
            curr = temp_area_arr[i];
            if (curr != prev){
                ++dist_count;
            }
            prev = curr;
        }
        answer_arr[i] = dist_count;
    }
    for (int i = 0; i < n; i++){
        cout << answer_arr[i] << endl;
    }
    return 0;
}
