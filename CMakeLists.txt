cmake_minimum_required(VERSION 3.15)

project(iof)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_C_STANDARD 99)

add_executable(${CMAKE_PROJECT_NAME}
    ${CMAKE_SOURCE_DIR}/render/main.c
    ${CMAKE_SOURCE_DIR}/render/renderer.c
    ${CMAKE_SOURCE_DIR}/world.c
)

add_subdirectory(${CMAKE_SOURCE_DIR}/deps/raylib)

target_link_libraries(${CMAKE_PROJECT_NAME} raylib)

include_directories(${CMAKE_SOURCE_DIR}/ ${CMAKE_SOURCE_DIR}/render/)