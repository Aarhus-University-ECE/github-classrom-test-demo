cmake_minimum_required(VERSION 3.16)

project(test-demo)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)

add_library(exercise-1 src/exercise-1.c)
add_library(exercise-2 src/exercise-2.c)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.0.1 # or a later release
)

FetchContent_MakeAvailable(Catch2)

add_executable(exercise-1-test tests/exercise-1.cpp)
target_link_libraries(exercise-1-test exercise-1 Catch2::Catch2WithMain)

add_executable(exercise-2-test tests/exercise-2.cpp)
target_link_libraries(exercise-2-test exercise-2 Catch2::Catch2WithMain)

list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras) # Needed when installing Catch2 with FetchContent


# include(CTest)
# enable_testing()

# include(Catch)
# catch_discover_tests(exercise-1-test exercise-2-test)

