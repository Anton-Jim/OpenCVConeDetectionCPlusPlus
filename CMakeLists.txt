cmake_minimum_required(VERSION 3.0.0)
project(main)
add_executable(main main.cpp)   


## OPENCV
find_package(OpenCV REQUIRED)
#set(CMAKE_CXX_STANDARD 17)
include_directories("C:/dev/opencv/build/include")
include_directories(${OpenCV_INCLUDE_DIRS})
include_directories("C:/dev/opencv/build/include/opencv2")
include_directories("C:/dev/opencv/sources/" PUBLIC ${OpenCV_INCLUDE_DIRS})
include_directories("C:/dev/opencv/sources/include/")               
include_directories("C:/dev/opencv/build/" PUBLIC ${OpenCV_INCLUDE_DIRS})
include_directories("C:/dev/opencv/build/include/")
target_link_libraries(main ${OpenCV_LIBS})


##Xtensor 2 Numpy for C++ Xtensor depends on XTL to be installed
#Finding the package
find_package(xtensor REQUIRED)
find_package(xtl REQUIRED)
#Finding and Including the directories
#include_directories("C:/dev/Mamba/Library/lib/cmake")
include_directories("C:/dev/Mamba/Library/lib/")
include_directories("C:/dev/Mamba/Library/lib/cmake/" PUBLIC ${xtl_INCLUDE_DIRS})
include_directories("C:/dev/Mamba/cmake/" PUBLIC ${xtensor_INCLUDE_DIRS})
include_directories(xtensor INTERFACE ${xtensor_INCLUDE_DIRS})
include_directories(xtensor INTERFACE ${xtl_INCLUDE_DIRS})
#Finding and Linking the libraries
target_link_libraries(main ${xtensor_LIBS})
target_link_libraries(main ${xtl_LIBS})

#Adding Main.cpp





#set(xtensor_USE_XSIMD 1)
#set(xtensor_USE_TBB 1)
#set(CMAKE_EXE_LINKER_FLAGS /MANIFEST:NO)
#set(CMAKE_MODULE_PATH = C:/dev/Mamba/Library/lib/cmake/xtensor)
#include(CTest)
#include(c:/dev/opencv/build/incude/opencv2)
#include(CPack)
#enable_testing()
#include_directories("${vcpkgRoot}/x86-windows/include")
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "./bin") 
#set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#set(CPACK_PROJECT_NAME ${PROJECT_NAME})
