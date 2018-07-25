//
// Created by Rudolph on 2018/07/20.
//

#ifndef GPEC_CALCULATOR_H
#define GPEC_CALCULATOR_H


#include <iostream>
#include <string>
#include "../Datastructs/Queue.h"
#include "Token.h"

class Calculator {
public:
    Calculator();
    std::string evaluate(std::string input);
    int preprocess();
    bool isDone();
    friend std::ostream &operator<<(std::ostream &os, Calculator &calculator);
    friend std::istream &operator>>(std::istream &is, Calculator &calculator);
    std::string settings(std::string input);
private:
    int idToken(char c);
    std::string inBuffer, outBuffer;
    bool done;
};


#endif //GPEC_CALCULATOR_H
