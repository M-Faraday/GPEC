//
// Created by Rudolph on 2018/07/22.
//

#ifndef GPEC_OPERATORS_H
#define GPEC_OPERATORS_H


#include "../Token.h"
#include "Term.h"

class Operators : public Token {
public:
    Operators(char out);
    int getPrecedence() const;
    Term calc(Term& first, Term& second);
private:
    int precedence, type;
    char out;
    //TODO *
    //TODO /
    //TODO -
    //TODO ^
};


#endif //GPEC_OPERATORS_H
