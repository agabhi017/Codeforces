#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string to_upper(string x){
    return transform(x.begin(), x.end(), x.begin(), ::toupper);
}

string to_lower(string x){
    return transform(x.begin(), x.end(), x.begin(), ::tolower);
}

int distinct_char_count(string x){
    int arr[x.length()] = {0};
    transform(x.begin(), x.end(), x.begin(), ::tolower);
    return 0;
}
