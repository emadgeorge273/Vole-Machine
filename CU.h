#pragma once
#ifndef CU_H
#define CU_H

#include "Register.h"
#include "Memory.h"

class CU {
public:
    void load(Register& reg, Memory& memory, int address);
    void store(const Register& reg, Memory& memory, int address);
    void halt();
};

#endif // CU_H


