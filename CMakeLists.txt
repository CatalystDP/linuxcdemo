cmake_minimum_required(VERSION 2.8.12.2)
project(linuxc)

set(LIBUV /home/dp/lib/libuv-v1.8.0)

include_directories(${LIBUV}/include)

find_package(Threads)##增加线程支持

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#set(SOURCE_FILES src/main.cpp)
FILE(GLOB SOURCE_FILES "./**/*.cpp")
add_executable(linuxc ${SOURCE_FILES} src/handlers/tty_handler.h src/handlers/tty_handler.cpp)
target_link_libraries(linuxc ${LIBUV}/libuv.a)
target_link_libraries(linuxc ${CMAKE_THREAD_LIBS_INIT})