// src/common/log.hpp
#ifndef LOG_HPP
#define LOG_HPP

#include <iostream>

template<typename T>
void log(const T& message) {
    std::cout << "\033[32m" << message << "\033[0m" << std::endl;
}

#endif
