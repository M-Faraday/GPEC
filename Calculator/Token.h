//
// Created by Rudolph on 2018/07/22.
//

#ifndef GPEC_TOKEN_H
#define GPEC_TOKEN_H


class Token {
public:
    Token(bool type);

    bool getType() const;

private:
    bool type;
};


#endif //GPEC_TOKEN_H
