#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solvemefirst(int a,int b) {
    return a+b;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num1, num2;
    int sum;
    std::cin >> num1 >> num2;
    sum = solvemefirst(num1, num2);
    std::cout << sum;
    return 0;
}
