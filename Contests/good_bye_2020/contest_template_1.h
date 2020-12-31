#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//string to_upper(string x){
//    return transform(x.begin(), x.end(), x.begin(), ::toupper);
//}

//string to_lower(string x){
//    return transform(x.begin(), x.end(), x.begin(), ::tolower);
//}

int distinct_char_count(string x){
    int x_len = x.length();
    int arr[26] = {0};
    int dist_count = 0;
    transform(x.begin(), x.end(), x.begin(), ::tolower);
    for (int i = 0; i < x_len; i++){
        if (arr[x[i] - 'a'] != 1){
            arr[x[i] - 'a'] = 1;
            ++dist_count;
        }
    }
    return dist_count;
}

int distinct_digit_count(string x){
    int x_len = x.length();
    int arr[10] = {0};
    int dist_count = 0;
    transform(x.begin(), x.end(), x.begin(), ::tolower);
    for (int i = 0; i < x_len; i++){
        if (arr[x[i] - '0'] != 1){
            arr[x[i] - '0'] = 1;
            ++dist_count;
        }
    }
    return dist_count;
}

int count_upper(string x){
    int x_len = x.length();
    int answer = 0;
    for (int i = 0; i < x_len; i++){
        if (x[i] >= 65 && x[i] <= 90){++answer;}
    }
    return answer;
}

int count_lower(string x){
    int x_len = x.length();
    int answer = 0;
    for (int i = 0; i < x_len; i++){
        if (x[i] >= 97 && x[i] <= 122){++answer;}
    }
    return answer;
}

int array_sum(int arr[], int n){
    int answer = 0;
    for (int i = 0; i < n; i++){
        answer += arr[i];
    }
    return answer;
}

void print_array(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}


