#pragma once
#ifndef ALU_H
#define ALU_H

class ALU {
public:
    int add(int a, int b) const;
    int subtract(int a, int b) const;
    int multiply(int a, int b) const;
    int divide(int a, int b) const;
};

#endif // ALU_H
