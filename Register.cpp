#include "Register.h"
#include <iostream>

Register::Register() : value(0) {}

int Register::getValue() const {
    return value;
}

void Register::setValue(int val) {
    value = val;
}

void Register::display() const {
    std::cout << "Register Value: " << value << std::endl;
}
