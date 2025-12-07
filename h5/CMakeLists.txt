cmake_minimum_required(VERSION 3.16)

project(h5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(h5 main.cpp
    ClassB.cpp
    ClassB.h
    ClassA1.cpp
    ClassA1.h
    ClassA2.cpp
    ClassA2.h)

include(GNUInstallDirs)
install(TARGETS h5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
