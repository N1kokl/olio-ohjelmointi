cmake_minimum_required(VERSION 3.16)

project(h6a LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Tarvitaan Q_OBJECT:ia varten (moc)
set(CMAKE_AUTOMOC ON)

# Qt6:n Core-moduuli käyttöön
find_package(Qt6 REQUIRED COMPONENTS Core)

# HUOM: tätä saa olla VAIN kerran, ei kahta add_executable(h6a...) riviä!
add_executable(h6a
    main.cpp
    myclass.cpp
)

# Linkitetään Qt6::Core mukaan
target_link_libraries(h6a
    Qt6::Core
)
