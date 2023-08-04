#include <iostream>

int main() {

  int the_amazing_random_number = rand() % 39;

  std::cout<<the_amazing_random_number;
  
  // This seeds the random number generator:
  srand (time(NULL));
  
  // Use rand() below to initialize the_amazing_random_number
  
  
}