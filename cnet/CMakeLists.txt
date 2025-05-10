cmake_minimum_required(VERSION 3.28)

project(CNetLibrary)

file(GLOB_RECURSE SOURCES *.cpp)

add_library(${PROJECT_NAME} ${SOURCES})

if(WIN32)
target_link_libraries(${PROJECT_NAME} wsock32 ws2_32)
endif()

set_target_properties(${PROJECT_NAME} PROPERTIES
    OUTPUT_NAME cnet
)
