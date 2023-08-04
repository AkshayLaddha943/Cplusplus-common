#include <iostream>
#include <string>
int main() {

    std::string s;
    std::string t;
    int arr[26];

    std::cout << "Please enter a string: ";
    std::getline(std::cin, s);
    std::cout << "Please enter another string: ";
    std::getline(std::cin, t);

    std::cout << "You entered " << s << t;

    while (s.length() == t.length()) {
         for (int i=0;i<s.length();i++) {
            arr[s[i] - 'a']++;
            arr[t[i] - 'a']--;
         }
         for (int i=0;i<26;i++) {
            if (arr[i] != 0) {
                std::cout << false;
            }
         }
         std::cout << true;
         }
         std::cout << false;
    }    