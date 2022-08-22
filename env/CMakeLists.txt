project(ENV)

message(STATUS "HOME dir: $ENV{HOME}")
message(STATUS "PATH dir: $ENV{PATH}")
message(STATUS "Current dir: $ENV{PWD}")

set(ENV{CC} gcc)
message(STATUS "Compiler: $ENV{CC}")