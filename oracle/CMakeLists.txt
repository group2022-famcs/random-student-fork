project(oracle)

add_library(oracle oracle.cpp)

add_executable(test_oracle tests.cpp)
target_link_libraries(test_oracle gtest_main oracle)

add_test(NAME test_oracle COMMAND test_oracle)
