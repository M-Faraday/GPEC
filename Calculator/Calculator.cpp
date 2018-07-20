//
// Created by Rudolph on 2018/07/20.
//

#include "Calculator.h"
Calculator::Calculator() {
    inBuffer = "";
    outBuffer= "";
    done = false;
}

std::ostream &operator<<(std::ostream &os, Calculator &calculator) {
    os << calculator.outBuffer;
    calculator.outBuffer = "";
    return os;

}

std::istream &operator>>(std:: istream &is, Calculator &calculator) {
    std::getline(is,calculator.inBuffer);
    return is;
}

int Calculator::evaluate(){
    if (inBuffer == "EXIT") {
        done = true;
        outBuffer = "EXITING";
        return 0;
    } else if (inBuffer.length() != 0) {
        outBuffer += inBuffer;
        inBuffer = "";
        return 0;
    } else {
        return -1;
    }
}

bool Calculator::isDone() {
    return done;
}
