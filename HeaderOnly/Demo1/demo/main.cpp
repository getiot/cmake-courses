// demo/main.cpp
#include "api/lidar_driver.hpp"
#include "driver/driver_impl.hpp"
#include "driver/sub_dir/sub_driver.hpp"
#include "common/version.hpp"

int main() 
{
    // 打印版本信息
    std::cout << "Version " << VERSION_MAJOR << "." << VERSION_MINOR << std::endl;
    
    // 创建类实例
    LidarDriver<int> lidar;
    DriverImpl<int> driver;
    SubDriver<int> subDriver;

    // 执行功能
    lidar.start();
    driver.initialize();
    driver.process();
    subDriver.run();
    lidar.stop();

    return 0;
}
