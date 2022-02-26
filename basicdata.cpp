#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i;
    double d;
    long l;
    char a;
    float f;
    scanf("%d %ld %c %f %lf", &i, &l, &a, &f,&d);
    printf("%d \n", i);
    printf("%ld\n", l);
    printf("%c\n", a);
    printf("%f\n", f);
    printf("%lf", d);
    
    return 0;
}