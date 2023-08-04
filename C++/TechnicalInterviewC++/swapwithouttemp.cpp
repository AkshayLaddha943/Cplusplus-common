#include <iostream>
using namespace std;

int swap(int a, int b) {
    a = a+b;
    b = a-b;
    a = a-b;

    cout<<"After swapping without thrid variable "<<"a = "<<a<<", b = "<<b;
    return 0;
}

int main() {
    swap(4,11);
}