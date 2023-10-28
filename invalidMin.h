//
// Created by Jacob Yeung on 10/25/23.
//

#ifndef CS216PROGRAMMINGEXERCISE1404_INVALIDMIN_H
#define CS216PROGRAMMINGEXERCISE1404_INVALIDMIN_H

#include <stdexcept>
#include <string>

using namespace std;

class invalidMin : public runtime_error {
public:
    invalidMin():runtime_error("Invalid hour"){
    }
};

#endif //CS216PROGRAMMINGEXERCISE1404_INVALIDMIN_H
