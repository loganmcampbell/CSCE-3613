#sudo apt-get install cmake cmake-curses-gui
#Specify the version being used as well as the language
#cmake_minimum_required(VERSION 2.6)
#Name your project here
#project(numerical)
#Sends the -std=c99 flag to the gcc compiler
#add_definitions(-std=c99)
#This tells CMake to main.c and name it numerical
#add_executable(numerical main.c)

#PROJECT ( programcmake )
add_executable(numerical main.c)
ADD_SUBDIRECTORY (src)
