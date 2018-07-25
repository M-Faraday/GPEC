//
// Created by Rudolph on 2018/07/22.
//

#include <string>
#include "Operators.h"

Operators::Operators(char out) : Token(0), out(out) {
    if (out == '+') {
        precedence = 2;
        type = 1;
    } else if (out == '(') {
        precedence = 0;
        type = 2;
    } else if (out == ')') {
        precedence = 0;
        type = 3;
    } else {
        throw "Unknown operator: " + out;
    }
}

int Operators::getPrecedence() const {
    return precedence;
}

Term Operators::calc(Term& first, Term& second) {
    switch (type) {
        case 1 :
            return first + second;
    }
}
