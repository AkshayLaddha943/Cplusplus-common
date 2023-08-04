#include <iostream>
using namespace std;

vector<int> moveZeroes(vector<int> nums) {
    int n = nums.size();
    int start=0; end=n-1; mid=0

    while(mid<= end) {
        if (num[mid]!= 0) {
            swap(num[start], num[mid]);
            start++;
        }
        mid++;
    }
}