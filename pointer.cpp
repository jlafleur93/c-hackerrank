#include <stdio.h>
#include <stdlib.h>
void update(int *a, int *b)
{
    int add, diff;
    add = *a + *b;
    diff = abs(*b - *a);
    *a = add;
    *b = diff;
};

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}