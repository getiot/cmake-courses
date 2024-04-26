// src/driver/sub_dir/sub_driver.hpp
#ifndef SUB_DRIVER_HPP
#define SUB_DRIVER_HPP

#include "common/log.hpp"

template <typename T>
class SubDriver {
public:
    void run() {
        log("SubDriver running.");
    }
};

#endif
