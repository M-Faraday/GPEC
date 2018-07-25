//
// Created by Rudolph on 2018/07/22.
//

#ifndef GPEC_REAL_H
#define GPEC_REAL_H


#include <string>
#include "../Term.h"

class Real: public Term {
public:
    Real(std::string svalue, int type);
    Real(const Real& other);
    Term operator+(const Term &right);

    int getValue() const;

private:
    int value;
};


#endif //GPEC_REAL_H
