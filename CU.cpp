#include "CU.h"
#include <iostream>

void CU::load(Register& reg, Memory& memory, int address) {
    reg.setValue(memory.getCell(address));
}

void CU::store(const Register& reg, Memory& memory, int address) {
    memory.setCell(address, reg.getValue());
}

void CU::halt() {
    std::cout << "Machine halted." << std::endl;
}
