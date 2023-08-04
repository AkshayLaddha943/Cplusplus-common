#include <iostream>
using namespace std;

int swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout<<"After swapping "<< "a = "<< a << ", b = " << b<<endl;
    return 0;
}

int main() {
    int i = 4;
    int j = 11;
    swap(i,j);

    cout<<i<<" "<<j;
}