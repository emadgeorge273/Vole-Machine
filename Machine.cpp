#include "Machine.h"
#include <fstream>
#include <iostream>

void Machine::loadProgramFile(const std::string& fileName) {
    std::ifstream file(fileName);
    int address = 0;
    int instruction;

    if (!file.is_open()) {
        std::cerr << "Error: Could not open file." << std::endl;
        return;
    }

    while (file >> instruction) {
        memory.setCell(address++, instruction);
    }
}

void Machine::outputState() const {
    std::cout << "Current Machine State:" << std::endl;
    memory.displayMemory();
    reg.display();
    processor.display();
}
