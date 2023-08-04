#include <stdio.h>

void update(int *a, int *b)
{
    int c = *a;
    int d = *b;
    *a = c + d;
    *b = c - d; 
        
        /*
            abs() : returns the absolute value of an  integer number, if don't use, It will return -1 in answer according to Example(4 - 5 = -1).
        */
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d", a, b);

    return 0;
}
