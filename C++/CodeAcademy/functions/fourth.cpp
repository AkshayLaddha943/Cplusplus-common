#include <iostream>
#include <vector>

// Define first_three_multiples() here:

std::vector<int> first_three_multiples(int num);


int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}

std::vector<int> first_three_multiples(int num) {
  std::vector<int> multiples_vector;
  for (int i = 0; i < 3; i++) {
    multiples_vector.push_back(num * i);
  }
  return multiples_vector;
} 