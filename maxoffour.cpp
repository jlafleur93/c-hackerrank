#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int element[4] = {a, b, c, d};
    int arrRet[1] = {0};
    for(int i = 0; i < 4; i++){
        int ret[1] = { 0 };
        if(ret[1] < element[i]){
            ret[1] = element[i];
        }
        arrRet[1] = ret[1];
    };
    return arrRet[1];
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
