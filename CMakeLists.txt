cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(salam_project VERSION 2.0)

file(GLOB_RECURSE SRC_FILES src/*.cpp)

add_executable(Salam main.cpp ${SRC_FILES})
target_include_directories(Salam PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

message("kia_huwa"="${PROJECT_SOURCE_DIR}")

