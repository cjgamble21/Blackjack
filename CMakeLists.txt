cmake_minimum_required(VERSION 3.28)
project(Blackjack)

set(CMAKE_CXX_STANDARD 23)


# Disable Shared Libs
set(BUILD_SHARED_LIBS OFF)
set(SDL_SHARED OFF)
set(SDL_STATIC ON)

# Disable AVIF Support
set(SDL3IMAGE_AVIF OFF)

# Enable FetchContent
include(FetchContent)

FetchContent_Declare(
        SDL3
        GIT_REPOSITORY https://github.com/libsdl-org/SDL.git
        GIT_TAG origin/main
        OVERRIDE_FIND_PACKAGE
)

FetchContent_MakeAvailable(SDL3)

add_executable(Blackjack main.cpp
        src/Card.cpp
        src/Card.h
        src/enums.cpp
        src/Pot.cpp
        src/Pot.h
        src/Player.cpp
        src/Player.h
        src/constants.cpp)

target_link_libraries(Blackjack SDL3)
