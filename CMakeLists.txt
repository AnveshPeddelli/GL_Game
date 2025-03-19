cmake_minimum_required(VERSION 3.10)

project(Gmake_Game)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES
    ${CMAKE_SOURCE_DIR}/MainLoop/main_game.cpp
    ${CMAKE_SOURCE_DIR}/Player/player.cpp   
)

set(CMAKE_BUILD_TYPE Debug)

add_executable(Gmake_Game ${SOURCES})

target_include_directories(Gmake_Game PRIVATE $(CMAKE_SOURCE_DIR)/Player)