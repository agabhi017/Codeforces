#include <iostream>
#include <string>

using namespace std;

int check_dist(string x){
    int arr[10] = {0};
    int dist_count = 0;
    for (int i = 0; i < 4; i++){
        if (arr[x[i] - '0'] != 1){
            arr[x[i] - '0'] = 1;
            ++dist_count;
        }
    }
    if (dist_count == 4){return 1;}
    else {return 0;}
}

int main(){
    int year;
    cin >> year;
    int flag = 0;
    while (flag < 1){
        ++year;
        flag = check_dist(to_string(year));
    }
    cout << year << endl;
    return 0;
}
