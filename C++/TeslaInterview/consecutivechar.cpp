class Solution {
public:
    int maxPower(string s) {
        if (s.length() == 1) {
            return 1;
        }
        int count = 1; int max = 1;
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
};


//Algorithm:

//Let the two pointer's be tempcount which stores the current sequence of same characters that we are iterating and maxcount be the consecutive maxsequence of same characters we iterated till now
//We also have a base case i.e If the input string has only one letter than return 1
//Now traverse the whole string and compare the consecutive letters if found same than increment the tempcount .
//After the new tempcount , compare it with maxcount & if tempcount is greater than maxcount then assign it to maxcount .
//The process 3 and 4 repeats till the end of the string