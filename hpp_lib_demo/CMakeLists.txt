# 设置 CMake 的最低版本要求
cmake_minimum_required(VERSION 3.0)

# 设置项目名称和语言
project(LidarDriverDemo CXX)

# 源文件目录
set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")

# 设置头文件目录
include_directories("${CMAKE_SOURCE_DIR}/src")

# 添加动态库 driver
# add_library(driver SHARED
#     "${SRC_DIR}/api/lidar_driver.hpp"
#     "${SRC_DIR}/driver/driver_impl.hpp"
#     "${SRC_DIR}/driver/sub_dir/sub_driver.hpp"
# )

# 将库文件输出到 lib 目录
# set_target_properties(driver PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)

# 添加 demo 可执行文件
add_executable(demo "${CMAKE_CURRENT_SOURCE_DIR}/demo/main.cpp")

# 链接动态库 driver
# target_link_libraries(demo PRIVATE driver)

# 将 src 目录添加到包含路径中，以便 demo 可执行文件可以找到头文件
target_include_directories(demo PRIVATE "${SRC_DIR}")
