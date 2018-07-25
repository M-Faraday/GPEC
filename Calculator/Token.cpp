//
// Created by Rudolph on 2018/07/22.
//

#include "Token.h"

Token::Token(bool type) : type(type) {}

bool Token::getType() const {
    return type;
}
