//
// Created by Rudolph on 2018/07/20.
//

#include "Calculator.h"
#include "../Datastructs/Queue.h"

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

int Calculator::preprocess(){
    if ((inBuffer.length() > 0)&&(inBuffer[0] == '$')) {
        outBuffer = settings(inBuffer);
        inBuffer = "";
        return settings(outBuffer);
    } else if (inBuffer.length() != 0) {
        outBuffer = evaluate(inBuffer);
        inBuffer = "";
        return 0;
    } else {
        return -1;
    }
}

bool Calculator::isDone() {
    return done;
}

int Calculator::settings(std::string input) {
    //TODO $MODE
    //TODO $LOAD
    //TODO $DEFINE
    //TODO $EXIT
    //TODO $PRECISION
    return 0;
}

std::string Calculator::evaluate(std::string input){
    Queue<std::string> tokens;
    std::string temp;
    for (int i = 0; i < input.length(); ++i) {
        if(input[i] != ' ') {
            temp += input[i];
        }
    }
    int prevType = NULL;
    std::string tToken = "";
    for (int i = 0; i < temp.length(); ++i) {
        if ((idToken(temp[i]) != prevType)&&(tToken != "")) {
            tokens.push(tToken);
            tToken = "";
            tToken += temp[i];
        } else {
            tToken += temp[i];
        }
        prevType = idToken(temp[i]);
    }
    if (tToken != "") {
        tokens.push(tToken);
        tToken = "";
    }
    return tokens.toString();
}

int Calculator::idToken(char c) {
    if ((c < 58)&&(c> 47)||(c == 46)) {
        return 0;
    } else if ((c < 91)&&(c> 64)) {
        return 1;
    } else if ((c < 123)&&(c> 96)) {
        return 1;
    } else {
        return c;
    }
}
