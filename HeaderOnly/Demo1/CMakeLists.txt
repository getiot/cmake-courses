# 设置 CMake 的最低版本要求
cmake_minimum_required(VERSION 3.0)

# 设置项目名称和语言
project(LidarDriverDemo LANGUAGES CXX)

# 设置头文件目录
include_directories("${CMAKE_SOURCE_DIR}/src")

# 添加 demo 可执行文件
add_executable(demo "${CMAKE_SOURCE_DIR}/demo/main.cpp")
