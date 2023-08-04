#include <iostream>

class Parent { 
public:
    void virtual say() {
        std::cout << "1";
    }
};

class Child : public Parent {
public:
    void say()
    {
        std::cout << "2";
    }
};

int main()
{
    Parent* a = new Child();
    a->say();
    return 0;
}