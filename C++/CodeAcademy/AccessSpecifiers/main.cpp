#include <iostream>
using namespace std;

class Base {
   protected :
   void value() {
   int num = 7;
   cout<<"This is value "<<num;
   }
};
class Derived : public Base {
   public :
   void func() {
      cout << "The value of num is: " << num;
   }
};
int main() {
   Base obj;
   obj.value();
   return 0;
}