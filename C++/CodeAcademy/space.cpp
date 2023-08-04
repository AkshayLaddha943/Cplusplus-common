#include <iostream>

int main() {
  
  float weight;
  int x;
  std::cout << "Enter your Earth weight & number for the planet you want your weight on: ";
  
  std::cin >> weight >> x;

  if (x=1) {
    weight = weight * 0.38;
  }
  else if (x=2) {
    weight = weight * 0.91;
  }
  else if (x=3) {
    weight = weight * 0.38;
  }
  else if (x=4) {
    weight = weight * 2.34;
  }
  else if (x=5) {
    weight = weight * 1.06;
  }
  else if (x=6) {
    weight = weight * 0.92;
  }
  else {
    weight = weight * 1.19;
  }

  std::cout << "Your weight on the planet is: " << weight << "\n";

}




  
  
  
  
  
  
  
  
  
  
  
}