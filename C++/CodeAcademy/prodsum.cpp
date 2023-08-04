/*Write a program to find the sum of even numbers and the product of odd numbers in a vector.*/

#include <iostream>
#include <vector>

int main(){
  std::vector<int> evenodd = {2, 4, 3, 6, 1, 9};
  int sum = 0; 
  int prod = 1;

  for (int i=0; i<evenodd.size(); i++) {
    if (evenodd[i]%2 == 0) {
      sum = sum + evenodd[i];
    }
    else if (evenodd[i]%2 != 0) {
      prod = prod * evenodd[i];
    }
  }
  std::cout << "The sum is: " << sum << "\n";
  std::cout << "The product is: " << prod;
}