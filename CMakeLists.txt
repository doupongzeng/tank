cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_COMPILER "E:/mingw64/bin/g++.exe")
set(CMAKE_C_COMPILER "E:/mingw64/bin/gcc.exe")

project(tank)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

list(APPEND ege_lib graphics64 uuid msimg32 gdi32 imm32 ole32 oleaut32 winmm gdiplus)
file(GLOB src ${CMAKE_SOURCE_DIR}/*.cpp ${CMAKE_SOURCE_DIR}/*.h)
add_executable(tank ${src})
target_link_libraries(tank ${ege_lib})