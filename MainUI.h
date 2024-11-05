#pragma once
#ifndef MAINUI_H
#define MAINUI_H

#include "Machine.h"
#include <string>

class MainUI {
private:
    Machine machine;
    bool enterFileOrInstructions;

public:
    MainUI();
    bool getFileOrInstructions();
    void displayMenu();
    std::string inputFileName();
    std::string inputInstruction();
    char inputChoice();
    Machine& getMachine();  // Added method to access Machine object
};

#endif // MAINUI_H
