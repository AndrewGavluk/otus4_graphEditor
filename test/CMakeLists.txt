cmake_minimum_required(VERSION 3.2)
enable_testing()

find_package(GTest REQUIRED)
include_directories()
add_executable(gtest_ test_.cpp)

set_target_properties(gtest_ 
	PROPERTIES 
	CXX_STANDARD 14
	CXX_STANDARD_REQUIRED ON
	INCLUDE_DIRECTORIES ${GTEST_INCLUDE_DIRS})
	
				
if(MSVC)
	target_compile_options(gtest_ PRIVATE /W4)
else()
	target_compile_options(gtest_ PRIVATE -Wall -Wextra -pedantic -Werror)
endif()
							
target_link_libraries(gtest_ gtest pthread)
							
add_test(gtest__test1 gtest_)
