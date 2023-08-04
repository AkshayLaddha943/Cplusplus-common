#include <iostream>
using namespace std;

class Solution {
public:
    int maxPower(string s) {
        if (s.length() == 1) {
            return 1;
        }
        int count
        for (int i=1;i<s.length();i++) {
            if (s[i] == s[i-1]) {
                count++;
            }
            else {
                count = 1;
            }
            if (max < count) {
                max = count;
            }
        }
        return max;
    }

    unordered_map<char, int> getfrequency(const string s) {
        
    }

};