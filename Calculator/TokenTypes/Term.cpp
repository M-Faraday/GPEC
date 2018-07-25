//
// Created by Rudolph on 2018/07/22.
//

#include "Term.h"

Term::Term(int termtype) : Token(1), termtype(termtype) {}

int Term::getTermtype() const {
    return termtype;
}
