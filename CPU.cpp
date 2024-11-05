#include "CPU.h"
#include <iostream>

void CPU::fetch(Memory& memory, int address) {
    instructionRegister = std::to_string(memory.getCell(address));
}

void CPU::decodeExecute(Memory& memory, Register& reg) {
    if (instructionRegister == "1000") { // Example opcode for load
        cu.load(accumulator, memory, reg.getValue());
    }
    else if (instructionRegister == "2000") { // Example opcode for store
        cu.store(accumulator, memory, reg.getValue());
    }
    else if (instructionRegister == "C000") { // Halt instruction
        cu.halt();
        reg.setValue(-1); // Set a value that will break the main loop
    }
}

void CPU::runNextStep(Memory& memory, Register& reg) {
    if (reg.getValue() < 0 || reg.getValue() >= memory.getCell(0)) { // Halt if out of bounds
        return;
    }
    fetch(memory, reg.getValue());
    decodeExecute(memory, reg);
    reg.setValue(reg.getValue() + 1); // Increment the program counter
}

std::string CPU::getInstructionRegister() const {
    return instructionRegister;
}

void CPU::display() const {
    std::cout << "Accumulator: ";
    accumulator.display();
}
