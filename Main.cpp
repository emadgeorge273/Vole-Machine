
#include "Machine.h"
#include <iostream>
#include <string>

int main() {
    Machine machine;

    // Load a program file (modify the file path if necessary)
    std::string fileName = "program.txt";
    machine.loadProgramFile(fileName);

    // Run the Vole machine until halt is called
    while (true) {
        machine.processor.runNextStep(machine.memory, machine.reg);
        machine.outputState();

        // Check for halt condition (break loop if halted)
        if (machine.reg.getValue() == -1) 
        {
            std::cout << "Machine halted." << std::endl;
            break;
        }
    }

    return 0;
}

