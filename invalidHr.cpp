//
// Created by Jacob Yeung on 10/25/23.
//

#include "invalidHr.h"

const std::string &invalidHr::ERROR  = "invalid Hour";

invalidHr::invalidHr(): runtime_error(invalidHr::ERROR){
}
invalidHr::invalidHr(const string& errorMessage): runtime_error(errorMessage){
}
//const char *invalidHr::what() const noexcept {
//    return runtime_error::what();
//}

const bool invalidHr::isInvalid(const int& time) const{
    return time < 0 || time >= 60;
}

