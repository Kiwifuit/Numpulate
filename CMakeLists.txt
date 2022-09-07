cmake_minimum_required(VERSION 3.0)
project(libnumpulate C)
add_library(numpulate STATIC src/numpulate.c)
install(TARGETS numpulate DESTINATION .)