cmake_minimum_required(VERSION 2.8.12.2)
project(linuxc)

set(LIBUV /home/dp/lib/libuv-v1.8.0)

include_directories(${LIBUV}/include)

find_package(Threads)##增加线程支持

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#set(SOURCE_FILES src/main.cpp)
message(STATUS "source path ${PROJECT_SOURCE_DIR}")
FILE(GLOB_RECURSE SOURCE_FILES  ${PROJECT_SOURCE_DIR} "src/*.cpp")
message(STATUS "source files ${SOURCE_FILES}")
add_executable(linuxc ${SOURCE_FILES} src/mod/absSelection.cpp src/mod/absSelection.h src/mod/rootSelection.cpp src/mod/rootSelection.h)
target_link_libraries(linuxc ${LIBUV}/libuv.a)
target_link_libraries(linuxc ${CMAKE_THREAD_LIBS_INIT})