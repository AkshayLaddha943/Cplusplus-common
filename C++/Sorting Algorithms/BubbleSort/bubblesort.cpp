//Bubble sort is a simple sorting algorithm, but it has a slow process time. It will divide an
//input list into two parts—a sublist of items already sorted on the right side and a sublist of
//items remaining to be sorted in the rest of the list. If we are going to sort a list of elements in
//ascending order, the algorithm will move the greatest value to the right position followed
//by the second greatest value

#include <iostream>
using namespace std;

void BubbleSort(int arr[], int endsize) {

    for (int i=0;i<endsize-1; i++) {
            bool isswapped=false;
        for (int j=0;j<endsize-i-1;j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isswapped=true;
            }
        if (isswapped=false) {
            break;
        }
        }
    }
}

int main() {
    int arr[] = {43, 21, 17, 56, 73, 136, 65, 89, 44};
    int arrsize = sizeof(arr)/sizeof(*arr);

    cout<<"Before Sorting ";
    for (int i=0; i < arrsize; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    BubbleSort(arr, arrsize);

    cout<<"After Sorting ";
    for (int i=0; i < arrsize; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

}