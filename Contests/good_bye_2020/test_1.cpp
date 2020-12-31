#include <iostream>
#include <string>
#include "contest_tempelate_1.h"

using namespace std;

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    //cout << to_lower(s) << endl;
    int arr[5] = {1,2,3,4,5};
    int matrix[2][2] = {{1,2}, {3,4}};
    int dist_count = distinct_char_count(s);
    cout << "distinct characters " << dist_count << endl;
    cout << "distinct digits " << distinct_digit_count(to_string(n)) << endl;
    cout << "length of string " << s.length() << endl;
    cout << "upper case count " << count_upper(s) << endl;
    cout << "lower case count " << count_lower(s) << endl;
    cout << "sum of array " << array_sum(arr, 5) << endl;
    cout << sizeof(arr)/sizeof(arr[0]) << endl;
    print_array(arr, 5);
    return 0;
}
