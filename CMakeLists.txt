cmake_minimum_required(VERSION 3.16)
project(xfce4-copy-bar
  DESCRIPTION "a xfce4 copy bar"
  LANGUAGES CXX)

set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH}" "${PROJECT_SOURCE_DIR}/cmake")

include_directories(include)

set(MAIN_SOURCES
  ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
)

add_executable(xfce4-copy-bar)
target_sources(xfce4-copy-bar
 PRIVATE
  ${MAIN_SOURCES}
)
target_include_directories(xfce4-copy-bar PRIVATE include)
target_link_libraries(xfce4-copy-bar)
