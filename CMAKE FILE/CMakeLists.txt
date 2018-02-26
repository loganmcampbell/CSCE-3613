#make_mininum_required(VERSION 2.8)
#project(main)

#add_library(factorial factorial.c)
#add_library(gcd gcd.c)
#add_library(gn3 gn3.c)
#add_library(prime prime.c)


#add_exectuable(main main.c)
#target_link_libraries(factorial main)
#target_link_libraries(gcd main)
#target_link_libraries(gn3 main)
#target_link_libraries(prime main)

cmake_minimum_required(VERSION 2.8)
project(main)
set(CMAKE_C_FLAGS "-std=c99")
include_directories("/src")
add_executable(main main.c)
