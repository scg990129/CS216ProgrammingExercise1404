//
// Created by Jacob Yeung on 10/27/23.
//

#ifndef CS216PROGRAMMINGEXERCISE1404_INVALIDSEC_H
#define CS216PROGRAMMINGEXERCISE1404_INVALIDSEC_H

#include <stdexcept>
#include <string>

using namespace std;

class invalidSec : public runtime_error {
public:
    invalidSec():runtime_error("Invalid hour"){
    }
};

#endif //CS216PROGRAMMINGEXERCISE1404_INVALIDSEC_H
