//
// Created by Rudolph on 2018/07/20.
//

#ifndef GPEC_CALCULATOR_H
#define GPEC_CALCULATOR_H


#include <iostream>
#include <string>

class Calculator {
public:
    Calculator();
    int evaluate();
    bool isDone();
    friend std::ostream &operator<<(std::ostream &os, Calculator &calculator);
    friend std::istream &operator>>(std::istream &is, Calculator &calculator);

private:
    std::string inBuffer, outBuffer;
    bool done;
};


#endif //GPEC_CALCULATOR_H
