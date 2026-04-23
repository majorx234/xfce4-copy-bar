cmake_minimum_required(VERSION 3.16)
project(xfce4-copy-bar
  DESCRIPTION "a xfce4 copy bar"
  LANGUAGES CXX)

include(FindPkgConfig)
find_package(PkgConfig REQUIRED)
pkg_check_modules(XFCE4_PANEL REQUIRED libxfce4panel-2.0)

set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH}" "${PROJECT_SOURCE_DIR}/cmake")

include_directories(include)

set(MAIN_SOURCES
  ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
)

set(XFCE4_COPY_BAR_SOURCES
  ${CMAKE_CURRENT_SOURCE_DIR}/src/xfc4-copy-bar.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/include/xfce4-copy-bar.h
  ${CMAKE_CURRENT_SOURCE_DIR}/src/dock.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/include/dock.hpp
)

add_library(xfce4-copy-bar)
target_sources(xfce4-copy-bar
 PRIVATE
  ${XFCE4_COPY_BAR_SOURCES}
)
target_include_directories(xfce4-copy-bar
  PUBLIC ${XFCE4_PANEL_INCLUDE_DIRS}
  PRIVATE include)
target_link_libraries(xfce4-copy-bar)

add_executable(xfce4-copy-bar-test)
target_sources(xfce4-copy-bar-test
 PRIVATE
  ${MAIN_SOURCES}
)
target_include_directories(xfce4-copy-bar-test PRIVATE include)
target_link_libraries(xfce4-copy-bar-test)
