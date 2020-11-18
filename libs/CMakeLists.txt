cmake_minimum_required(VERSION 3.2)

add_library(m_point STATIC m_point.h  m_point.cpp)
add_library(m_multyline STATIC m_multyline.h   m_multyline.cpp)
add_library(model STATIC model.h  model.cpp)

add_library(lib STATIC lib_.cpp lib_.h)
set_target_properties(lib  PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
target_include_directories(lib PRIVATE ${CMAKE_BINARY_DIR})

if(MSVC)
	target_compile_options(lib PRIVATE /W4)
else()
 	target_compile_options(lib PRIVATE -Wall -Wextra -Werror)
endif()
