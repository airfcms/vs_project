cmake_minimum_required (VERSION 3.8)
project (vs_project)

include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}
)

add_executable (vs_project "src/main.cpp")
