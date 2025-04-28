cmake_minimum_required(VERSION 3.10)

project(MyProject)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)


if (MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()


include_directories(include)
include_directories(src)


add_executable(MyProgram src/main.cpp src/calculator.cpp)


enable_testing()


file(GLOB_RECURSE TEST_SOURCES CONFIGURE_DEPENDS tests/*.cpp)


set(TEST_TARGETS)


foreach(test_src ${TEST_SOURCES})
    get_filename_component(test_name ${test_src} NAME_WE)

    add_executable(${test_name} ${test_src} src/calculator.cpp)

    target_include_directories(${test_name} PRIVATE include src)

    add_test(NAME ${test_name} COMMAND ${test_name})

    list(APPEND TEST_TARGETS ${test_name})
endforeach()


add_custom_target(run_tests
    COMMAND ${CMAKE_CTEST_COMMAND} --output-on-failure
    DEPENDS ${TEST_TARGETS}
    COMMENT "Running all tests..."
)
