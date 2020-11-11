cmake_minimum_required(VERSION 3.16)

project(loopFun)

add_executable(loopFun loopFun.cpp)

install(TARGETS loopFun)

enable_testing()
add_test(NAME loopFun COMMAND loopFun)


IF (WIN32 AND CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
	target_link_libraries(loopFun -static)
ENDIF()