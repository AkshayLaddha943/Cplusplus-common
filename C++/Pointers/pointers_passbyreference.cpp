#include <iostream>
using namespace std;

void update(int* a, int* b)
{
    int c = *a;
    int d = *b;
    *a = c + d;
    *b = c - d; 
}

int main() {
    int a=4, b=5;
    int* pa = &a;
    int* pb = &b;
    update(pa, pb);
    cout<<a<<endl;
    cout<<b<<endl;;
    return 0;
}
