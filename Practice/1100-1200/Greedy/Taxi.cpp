#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> groups(n);
    vector <int> grp_count = {0,0,0,0};
    //fill_n(grp_count, 4, 0);
    for (int i = 0; i < n; i++){
        cin >> groups[i];
        grp_count[groups[i] - 1]++;
    }
    int taxi_count = 0;
    taxi_count += grp_count[3];  //the groups of size 4 will be accommodated in separate taxis
    taxi_count += grp_count[2];  //groups of size 3 can only be coupled with groups of size 1, if no such group of size 1 is present, then the group of size 3 will take a separate taxi
    grp_count[0] = max(grp_count[0] - grp_count[2], 0); //reducing the number of 1 sized groups by the number which is accommodated with groups of size 3
    taxi_count += (2 * grp_count[1])/4; //coupling the groups of size 2 with each other and later updating the number of leftover groups
    grp_count[1] = grp_count[1] % 2; //the remainder of 2 size groups left after coupling with each other; now only groups of 2 and 1 might be available
    taxi_count += grp_count[1]; //coupling 2 sized groups with single size groups
    grp_count[0] = max(0, grp_count[0] - 2 * grp_count[1]);  //calculating the leftover 1 sized groups, taking 2 for each group of size 2
    taxi_count += (int)ceil((float)(grp_count[0]) / 4);
    cout << taxi_count;
    return 0;
}
