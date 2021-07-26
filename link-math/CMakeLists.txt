cmake_minimum_required(VERSION 3.0)

project(LINK_MATH VERSION 0.0.1)
 
add_executable(go_sqrt main.c)

#target_link_libraries(${PROJECT_NAME} PRIVATE m)
target_link_libraries(go_sqrt PRIVATE m)
