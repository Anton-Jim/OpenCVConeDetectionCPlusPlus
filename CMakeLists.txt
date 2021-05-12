
#include(CTest)
#include(c:/dev/opencv/build/incude/opencv2)
#include(CPack)
#enable_testing()
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "./bin") 
#set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#set(CPACK_PROJECT_NAME ${PROJECT_NAME})


cmake_minimum_required(VERSION 3.0.0)
project(main VERSION 0.1.0)


set(CMAKE_CXX_STANDARD 17)
find_package(OpenCV REQUIRED)
#include_directories("C:/dev/opencv/build/include/opencv2" PUBLIC ${OpenCV_INCLUDE_DIRS})
include_directories(${OpenCV_INCLUDE_DIRS})
include_directories("C:/dev/opencv/build/include")
include_directories("C:/dev/opencv/build/include/opencv2")
include_directories("${vcpkgRoot}/x86-windows/include")

add_executable(opencvtest main.cpp)
target_link_libraries(opencvtest ${OpenCV_LIBS})
