cmake_minimum_required(VERSION 3.19)

project(SampleApplication LANGUAGES CXX)

# Check for dependencies
find_package(VTK CONFIG REQUIRED)

# Define the executable
add_executable(SampleApplication main.cpp)

# Link againsg dependencies
target_link_libraries(SampleApplication Foo ${VTK_LIBRARIES})
