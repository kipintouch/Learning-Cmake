cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
set(CMAKE_LEGACY_CYGWIN_WIN32 0)

project("To Do List")

enable_testing()

add_executable(toDo main.cpp ToDo.cpp)
add_test(toDoTest toDo)
