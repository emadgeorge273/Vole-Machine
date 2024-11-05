#include "Memory.h"
#include <iostream>

Memory::Memory(int size) : cells(size, 0) {}

int Memory::getCell(int address) const {
    return (address >= 0 && address < cells.size()) ? cells[address] : -1;
}

void Memory::setCell(int address, int value) {
    if (address >= 0 && address < cells.size()) {
        cells[address] = value;
    }
}

void Memory::displayMemory() const {
    std::cout << "Memory Content:" << std::endl;
    for (int i = 0; i < cells.size(); ++i) {
        std::cout << "Address " << i << ": " << cells[i] << std::endl;
    }
}

