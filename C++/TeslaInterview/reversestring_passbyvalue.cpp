#include <iostream>
#include <stack>
#include <string>

using namespace std;

string reverseString(string str) {
    stack<int> stk;
    for (char ch : str) {
        stk.push(ch);
    }
    str.clear();

    while (!stk.empty()) {
        str.push_back(stk.top());
        stk.pop();
    }

    return str;
}

int main() {
    string str = "Good work";
    cout << "Original String: " << str << endl;

    // Call the reverseString function and store the result in a new string
    string reversedStr = reverseString(str);

    cout << "Reversed String: " << reversedStr << endl;
    cout << "Original String (unchanged): " << str << endl;

    return 0;
}
