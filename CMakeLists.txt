cmake_minimum_required(VERSION 3.13)

project(Centroid)

set(PROJECT_HEADER
        include/Ellipse.h
        include/CompositeArea.h
        include/Figure.h
        include/Polygon.h
        include/Position.h
)

set(PROJECT_SOURCE
        src/Ellipse.cpp
        src/CompositeArea.cpp
        src/Figure.cpp
        src/main.cpp
        src/Position.cpp
        src/Polygon.cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(${PROJECT_NAME} ${PROJECT_SOURCE})