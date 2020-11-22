cmake_minimum_required (VERSION 3.2)

if (DEFINED ENV{TRAVIS_BUILD_NUMBER})
	project( graph_editor VERSION 0.0.$ENV{TRAVIS_BUILD_NUMBER})
else()
	project( graph_editor VERSION 99.99.999)
endif()

include_directories("${PROJECT_SOURCE_DIR}/libs")

add_subdirectory(src)