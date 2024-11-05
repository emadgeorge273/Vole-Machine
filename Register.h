#pragma once
#ifndef REGISTER_H
#define REGISTER_H

class Register {
private:
    int value;

public:
    Register();
    int getValue() const;
    void setValue(int val);
    void display() const;
};

#endif // REGISTER_H
