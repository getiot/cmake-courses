// src/api/lidar_driver.hpp
#ifndef LIDAR_DRIVER_HPP
#define LIDAR_DRIVER_HPP

#include "common/log.hpp"

template <typename T>
class LidarDriver {
public:
    LidarDriver() {
        log("LidarDriver constructed.");
    }

    void start() {
        log("LidarDriver started.");
    }

    void stop() {
        log("LidarDriver stopped.");
    }
};

#endif
