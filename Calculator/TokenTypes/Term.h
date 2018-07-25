//
// Created by Rudolph on 2018/07/22.
//

#ifndef GPEC_TERM_H
#define GPEC_TERM_H


#include "../Token.h"

class Term : public Token {
public:
    Term(int termtype);

    int getTermtype() const;
    virtual Term operator+(const Term &right) = 0;
private:
    int termtype;
};


#endif //GPEC_TERM_H
