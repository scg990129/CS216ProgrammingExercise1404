//
// Created by Jacob Yeung on 10/25/23.
//

#ifndef CS216PROGRAMMINGEXERCISE1404_INVALIDMIN_H
#define CS216PROGRAMMINGEXERCISE1404_INVALIDMIN_H

#include "invalidHr.h"

class invalidMin: public invalidHr {
public:
    const static std::string &ERROR;// = "invalid Hour";
    invalidMin();
    const bool isInvalid(const int& time) const;
//    const char *what();
};

#endif //CS216PROGRAMMINGEXERCISE1404_INVALIDMIN_H
