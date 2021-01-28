#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin >> t;
    long long num;
    while (t--){
        cin >> n;
        vector <long long> even;
        vector <long long> odd;
        for (int i = 0; i < n; i++){
            cin >> num;
            if (num % 2 == 0){even.push_back(num);}
            else {odd.push_back(num);}
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());

        long long a_score = 0, b_score = 0;
        int index_1, index_2;
        while (even.size() > 0 || odd.size() > 0){
            index_1 = even.size() - 1;
            index_2 = odd.size() - 1;

            if (index_1 == -1 || (index_1 >= 0 && index_2 >= 0 && even[index_1] < odd[index_2])){
                if (index_2 == -1) {break;}
                else {
                    odd.pop_back();
                    index_2 = odd.size() - 1;
                }
            }
            else if (index_1 >= 0 && index_2 >= 0 && even[index_1] > odd[index_2] || index_2 == -1){
                a_score += even[index_1];
                even.pop_back();
                index_1 = even.size() - 1;
            }

            if (index_2 == -1 || (index_1 >= 0 && index_2 >= 0 && even[index_1] > odd[index_2])){
                if (index_1 == -1){break;}
                else {
                    even.pop_back();
                    index_1 = even.size() - 1;
                }
            }
            else if (index_1 >= 0 && index_2 >= 0 && even[index_1] < odd[index_2] || index_1 == -1){
                b_score += odd[index_2];
                odd.pop_back();
                index_2 = odd.size() - 1;
            }

        }
        if ( a_score > b_score){cout << "Alice" << "\n";}
        else if (b_score > a_score){cout << "Bob" << "\n";}
        else {cout << "Tie" << "\n";}

    }
    return 0;
}
