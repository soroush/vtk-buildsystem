cmake_minimum_required(VERSION 3.19)

project(Foo LANGUAGES CXX)

# Check for dependencies
find_package(VTK CONFIG REQUIRED)

# Define the executable
add_library(${PROJECT_NAME} SHARED foo_exports.hpp foo.hpp foo.cpp)

set_target_properties(${PROJECT_NAME} PROPERTIES DEFINE_SYMBOL LIB_FOO_EXPORTS)

# Link againsg dependencies
target_link_libraries(${PROJECT_NAME} ${VTK_LIBRARIES})
