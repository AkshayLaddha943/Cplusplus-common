#include <iostream>

int main() {
    
    int x = 5;
    if (x > 0) {
        std::cout << "Positive Number" << std::endl;
    }
    else if (x < 0) {
        std::cout << "Negative Number" << std::endl;
    }
    else {
        std::cout << "Zero" << std::endl;
    }
    
    
    char status = 'a';
    
    if (status == 'a') {
        std::cout << "Accelerating" << std::endl;
    }
    else if (status == 'b') {
        std::cout << "Braking" << std::endl;
    }
    else if (status == 'p') {
        std::cout << "Parking" << std::endl;
    }
    else if (status == 'n') {
        std::cout << "Neutral" << std::endl;
    }
    else {
        std::cout << "Unknown" << std::endl;
    }
    
    return 0;
}