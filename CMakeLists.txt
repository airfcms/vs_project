cmake_minimum_required (VERSION 3.8)
project (vs_project)
#add_library(${PROJECT_NAME})

#target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
enable_testing()

# include_directories(
# 	${CMAKE_CURRENT_SOURCE_DIR}
# )

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z -Wall -W -Wconversion")
#target_compile_options(${PROJECT_NAME} PUBLIC -std=uniform_int_distribution)

# PROJECT _NAME variable uses the project name defined above
add_executable (${PROJECT_NAME} "src/main.cpp")

add_test(NAME ${PROJECT_NAME} COMMAND sh -c "gcc -std=c++1z -Wall -W -Wconversion ../src/main.cpp  -o vs_project &> vsproject-report.txt")