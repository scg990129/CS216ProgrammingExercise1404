//
// Created by Jacob Yeung on 10/25/23.
//

#ifndef CS216PROGRAMMINGEXERCISE1404_INVALIDHR_H
#define CS216PROGRAMMINGEXERCISE1404_INVALIDHR_H

#include <stdexcept>
#include <string>

using namespace std;

class invalidHr : public runtime_error {
public:
    invalidHr():runtime_error("Invalid hour"){
    }
};


#endif //CS216PROGRAMMINGEXERCISE1404_INVALIDHR_H
