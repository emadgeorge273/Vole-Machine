#pragma once
#ifndef MEMORY_H
#define MEMORY_H

#include <vector>

class Memory {
private:
    std::vector<int> cells;

public:
    Memory(int size = 256);
    int getCell(int address) const;
    void setCell(int address, int value);
    void displayMemory() const;
};

#endif // MEMORY_H
