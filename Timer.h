//
// Created by Jacob Yeung on 10/26/23.
//

#ifndef CS216PROGRAMMINGEXERCISE1404_TIMER_H
#define CS216PROGRAMMINGEXERCISE1404_TIMER_H

#include <iostream>
#include <stdexcept>
#include <string>
#include <ostream>
#include <sstream>
#include "invalidHr.h"
#include "invalidMin.h"
//#include "invalidSec.h"

using namespace std;

class Timer {
protected:
    int hour;
    int min;
    int sec;
public:
    friend std::ostream& operator<<(ostream& out, const Timer& time);

    Timer(const int hour,const int min,const int sec, const string& AMPM);
};


#endif //CS216PROGRAMMINGEXERCISE1404_TIMER_H
