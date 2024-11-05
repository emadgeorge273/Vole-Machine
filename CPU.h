#pragma once
#ifndef CPU_H
#define CPU_H

#include "Register.h"
#include "Memory.h"
#include "ALU.h"
#include "CU.h"
#include <string>

class CPU {
private:
    Register accumulator;
    ALU alu;
    CU cu;
    std::string instructionRegister;

public:
    void fetch(Memory& memory, int address);
    void decodeExecute(Memory& memory, Register& reg);
    void runNextStep(Memory& memory, Register& reg);
    std::string getInstructionRegister() const;
    void display() const;
};

#endif // CPU_H
