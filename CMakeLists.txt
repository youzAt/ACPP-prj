project(test)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES
	src/main.cpp
	src/electrician.cpp
	src/wire.cpp
	src/tool.cpp
	src/lamp.cpp
	)

cmake_minimum_required(VERSION 3.0)

include_directories(include/)

add_executable(app ${SOURCES})

