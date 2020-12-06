cmake_minimum_required(VERSION 3.2)

add_library(model STATIC model.h  model.cpp models\m_point.h  models\m_point.cpp)

add_subdirectory (views)
add_library(view STATIC view.h  view.cpp)

add_subdirectory (controllers)
add_library(controller STATIC controller.h controller.cpp)

if(MSVC)
	target_compile_options(model 		PRIVATE /W4)
	target_compile_options(view			PRIVATE /W4)
	target_compile_options(controller	PRIVATE /W4)
else()
	target_compile_options(model		PRIVATE -Wall -Wextra -Werror)
	target_compile_options(view			PRIVATE -Wall -Wextra -Werror)
 	target_compile_options(controller	PRIVATE -Wall -Wextra -Werror)
endif()
