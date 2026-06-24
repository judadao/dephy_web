cmake_minimum_required(VERSION 3.20.0)

project(dephy_web C)

add_library(dephy_web STATIC
  src/web_profile.c
)

target_include_directories(dephy_web PUBLIC include)
