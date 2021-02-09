cmake_minimum_required(VERSION 3.17)
project(fx_991EX_Sim)

set(CMAKE_CXX_STANDARD 20)
set(GCC_CXX_FLAGS ${GCC_CXX_FLAGS} "-static-libgcc -static-libstdc++ -static")

set(CMAKE_CXX_FLAGS_RELEASE "-O3")
add_executable(fx_991EX_Sim main.cpp calc/calculator.h calc/Decode.cpp calc/Decode.h ErrorCode.h)