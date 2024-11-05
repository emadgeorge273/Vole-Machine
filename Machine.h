#pragma once
#ifndef MACHINE_H
#define MACHINE_H

#include "Memory.h"
#include "Register.h"
#include "CPU.h"
#include <string>

class Machine {
public:
    Memory memory;
    Register reg;
    CPU processor;

    void loadProgramFile(const std::string& fileName);
    void outputState() const;
};

#endif // MACHINE_H
