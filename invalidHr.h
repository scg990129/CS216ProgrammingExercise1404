//
// Created by Jacob Yeung on 10/25/23.
//

#ifndef CS216PROGRAMMINGEXERCISE1404_INVALIDHR_H
#define CS216PROGRAMMINGEXERCISE1404_INVALIDHR_H

#include <stdexcept>
#include <string>

using namespace std;

class invalidHr : protected runtime_error {
public:
    const static std::string &ERROR;// = "invalid Hour";
    invalidHr();
//    virtual const char* what()  ;
    virtual const bool isInvalid(const int& time) const;
protected:
    invalidHr(const string& ERROR);
};


#endif //CS216PROGRAMMINGEXERCISE1404_INVALIDHR_H
