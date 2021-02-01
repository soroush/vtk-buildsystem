cmake_minimum_required(VERSION 3.19)

project(Bar LANGUAGES CXX)

# Check for dependencies
find_package(VTK CONFIG REQUIRED)

# Define the executable
add_library(${PROJECT_NAME} SHARED bar_exports.hpp bar.hpp bar.cpp)

set_target_properties(${PROJECT_NAME} PROPERTIES DEFINE_SYMBOL LIB_BAR_EXPORTS)

# Link againsg dependencies
target_link_libraries(${PROJECT_NAME} ${VTK_LIBRARIES})
