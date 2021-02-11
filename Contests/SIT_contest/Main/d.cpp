#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    vector <int> lot(n, 0);
    string s;
    cin >> s;
    int filled_space = 0;

    for (int i = 0; i < n; i++){
        if (s[i] == '1'){lot[i] = 1;}
        filled_space += lot[i];
    }
    int count_a, count_b;
    vector <int> park_a, park_b;
    for (int i = 1; i < n; i++){
        if (lot[i] == lot[i - 1] && lot[i] == 0){
            count_a++;
            park_a.push_back(i - 1);
            i++;
        }
    }

    if (a * 2 + b <= n - filled_space){
        if (a <= count_a){
            for (int i = 0; i < (int)park_a.size(); i++){
                lot[park_a[i]] = 1;
                lot[park_a[i] + 1] = 1;
            }
            for (int i = 0; i < n; i++){
                if (lot[i] == 0){
                    park_b.push_back(i);
                }
            }
            if (b <= park_b.size()){
                cout << "YES" << endl;
                for (int i = 0; i < a; i++){
                    cout << park_a[i] + 1 << " " << park_a[i] + 2 << endl;
                }
                for (int i = 0; i < b; i++){
                    cout << park_b[i] + 1 << endl;
                }
            }
            else {cout << "NO" <<endl;}
        }
        else{cout << "NO" <<endl;}
    }
    else {cout << "NO" <<endl;}


    return 0;
}
