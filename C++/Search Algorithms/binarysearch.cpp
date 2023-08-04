//Binary search is a searching algorithm to find the position of the searched value in a list by
//dividing the list into left and right sublists

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int startindex, int endindex, int val) {

    if (startindex <= endindex) {
        int middleindex = (startindex + endindex) / 2;

        if (arr[middleindex] == val) {
            return middleindex;
        }
        else if(arr[middleindex] > val) {
            return BinarySearch(arr, startindex, middleindex-1, val);
        }
        else {
            return BinarySearch(arr, middleindex+1, endindex, val);
        }
    }
    return -1;
}

int main() {
    int arr[] = {3, 8, 11, 15, 16, 23, 28, 30, 32, 39, 42, 44, 47, 48, 50};
    int size = sizeof(arr)/sizeof(*arr);
    int val= 42;

    int i = BinarySearch(arr, 0, size-1, val);

    if (i!=-1) {
         cout << val << " is found in index ";
         cout << i << endl;
        }
    else
    {
        cout << "Could not find value " << val;
        cout << endl;
    }
    return 0;
}