cmake_minimum_required(VERSION 3.28)

project(CNetTests)

file(GLOB_RECURSE SOURCES *.cpp)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} 
	CNetLibrary
    GTest::gtest
    GTest::gmock
)

set_target_properties(${PROJECT_NAME} PROPERTIES
	OUTPUT_NAME tests
)

