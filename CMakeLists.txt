cmake_minimum_required(VERSION 3.0.0)
project(sfmlGame VERSION 0.1.0)

add_executable(sfmlGame main.cpp)
add_subdirectory(lib/SFML)
include_directories(lib/SFML/include)
target_link_libraries(sfmlGame sfml-graphics sfml-window)

#add_custom_command(
#  TARGET sfmlGame
#  POST_BUILD # Adds a post-build event to MyTest
#  COMMAND
#    ${CMAKE_COMMAND} -E copy_if_different # which executes "cmake - E
#                                          # copy_if_different..."
#    "${PROJECT_BINARY_DIR}/lib/sfml/lib/sfml-system-d-3.dll"
#    "${PROJECT_BINARY_DIR}/lib/sfml/lib/sfml-window-d-3.dll"
#    "${PROJECT_BINARY_DIR}/lib/sfml/lib/sfml-graphics-d-3.dll"
#    $<TARGET_FILE_DIR:sfmlGame>)

