// a[0] = [1, 5, 4];
// j = 1 therefore we print  a[1] which is 5'
// find array located at index i = 1 which = a[1] = [1, 2, 8, 9, 3]
//we must print index at j = 3 which is 9 in this case
//basically we look for two values the first sets the variable sized arr while the second input is the 

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int z, x;   
    cin >> z >> x;
    vector<int> a[z];
    for(int i = 0; i < z; i++){
        int n;
        cin >> n;
        int o;
        for(int j = 0; j < n; j++){
            cin >> o;
            a[i].push_back(o);
        }
    }
    int r, s;
    for(int z = 1; z <= x; z++){
        cin >> r >> s;
        cout << a[r][s] << endl;
    }
    return 0;
}
