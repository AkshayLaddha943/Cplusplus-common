#include <iostream>

class Encapsulation {
  private:
    // Data hidden from outside world
    int num;

  public:
    // Function to set value of num
    void setNum(int x) {
      num = x;
    }

    // Function to return value of num
    int getNum() {
      return num;
    }
};

int main() {
  Encapsulation obj;

  obj.setNum(10);

  std::cout << obj.getNum() << "\n"; // Output: 10

  return 0;
}