#include <iostream>
#include <vector>
#include <set>

using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n , m;
        cin >> n >> m;
        char temp;
        vector <int> inst;
        inst.resize(n);
        int x = 0;
        for (int i = 0; i < n; i++){
            cin >> temp;
            if (temp == '+'){inst[i] = 1;}
            else {inst[i] = -1;}
        }
        int a, b, last;
        while (m--){
            cin >> a >> b;
            last = min(n, b);
            set<int, greater<int> > s1;
            s1.insert(x);
            int l1, l2;
            l1 = a - 1;
            for (int i = 0; i < l1; i++){
                x += inst[i];
                s1.insert(x);
            }
            for (int i = last; i < n; i++){
                x += inst[i];
                s1.insert(x);
            }
            cout << s1.size() << endl;
        }

    }
    return 0;
}
