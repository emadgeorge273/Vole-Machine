#include "MainUI.h"
#include <iostream>

MainUI::MainUI() : machine(), enterFileOrInstructions(false) {}

bool MainUI::getFileOrInstructions() {
    std::cout << "Would you like to enter a file (F) or individual instructions (I)? ";
    char choice;
    std::cin >> choice;
    enterFileOrInstructions = (choice == 'F' || choice == 'f');
    return enterFileOrInstructions;
}

void MainUI::displayMenu() {
    std::cout << "\nVole Machine Simulator Menu:" << std::endl;
    std::cout << "1. Load program file" << std::endl;
    std::cout << "2. Enter individual instruction" << std::endl;
    std::cout << "3. Output machine state" << std::endl;
    std::cout << "4. Quit" << std::endl;
}

std::string MainUI::inputFileName() {
    std::cout << "Enter the program file name: ";
    std::string filename;
    std::cin >> filename;
    return filename;
}

std::string MainUI::inputInstruction() {
    std::cout << "Enter an instruction in hex format: ";
    std::string instruction;
    std::cin >> instruction;
    return instruction;
}

char MainUI::inputChoice() {
    char choice;
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    return choice;
}

Machine& MainUI::getMachine() {  // Implementation of getMachine method
    return machine;
}
