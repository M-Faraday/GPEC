//
// Created by Rudolph on 2018/07/22.
//

#include "Real.h"

Real::Real(std::string svalue, int type)  : Term(0) {
    value = std::stoi(svalue);
}

Real::Real(const Real& other) : Term(0){
    value = other.value;
}

int Real::getValue() const {
    return value;
}


