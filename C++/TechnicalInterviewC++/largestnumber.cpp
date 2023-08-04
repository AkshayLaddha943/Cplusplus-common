#include <iostream>
#include <vector>
using namespace std;

int largestnum(vector<int> arr) {
    int pos;
    int largest = arr[0];
    for (int i=1; i<arr.size();i++) {
        if (arr[i] > largest)
            largest = arr[i];
            pos = i;
        }
    cout<<"Largest number is = "<<largest<<" and it is at position "<< pos;

    return 0;
}

int main() {
    cout<<largestnum({1, 4, 3, 11, 7, 26});
}