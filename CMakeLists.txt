cmake_minimum_required(VERSION 3.16)

project(HelloQt LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_standard_project_setup()

qt_add_executable(hello_qt
    main.cpp
)

target_link_libraries(hello_qt
    PRIVATE
        Qt6::Widgets
)
