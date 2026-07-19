cmake_minimum_required(VERSION 3.0)

Project(STUDENT_MANAGEMENT)

include_directories(include)

add_executable(StudentInforSystem main.cpp src/Student.cpp src/StudentManager.cpp)