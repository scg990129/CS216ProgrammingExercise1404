//
// Created by Jacob Yeung on 10/25/23.
//

#include "invalidMin.h"
#include "invalidHr.h"

const std::string &invalidMin::ERROR = "invalid Hour";

invalidMin::invalidMin(): invalidHr(invalidMin::ERROR){
}

const bool invalidMin::isInvalid(const int& time) const{
    time < 0 || time >= 24;
}