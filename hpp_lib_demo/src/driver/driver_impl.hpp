// src/driver/driver_impl.hpp
#ifndef DRIVER_IMPL_HPP
#define DRIVER_IMPL_HPP

#include "common/log.hpp"

template <typename T>
class DriverImpl {
public:
    void initialize() {
        log("Driver initialized.");
    }

    void process() {
        log("Driver processing.");
    }
};

#endif
