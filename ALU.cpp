#include "ALU.h"

int ALU::add(int a, int b) const {
    return a + b;
}

int ALU::subtract(int a, int b) const {
    return a - b;
}

int ALU::multiply(int a, int b) const {
    return a * b;
}

int ALU::divide(int a, int b) const {
    return (b != 0) ? a / b : 0;
}
