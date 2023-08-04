#include <iostream>
using namespace std;

enum class State {
    IDLE,
    READY,
    VENDING,
    FAULT
};

enum class Input {
    
    COIN,
    COIN_RETURN,
    BUTTON,
    VEND_COMPLETE,
    GENERIC_FAULT
};

