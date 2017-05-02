cmake_minimum_required(VERSION 3.4)
project(Damas)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    Control.cpp
    Control.h
    Excepcion.h
    Ficha.cpp
    Ficha.h
    Integer.cpp
    Integer.h
    Interfaz.cpp
    Interfaz.h
    Jugador.cpp
    Jugador.h
    LinkedList.h
    ListaOrdenable.cpp
    ListaOrdenable.h
    Main.cpp
    Nodo.h
    Tablero.cpp
    Tableroh.h)

add_executable(Damas ${SOURCE_FILES})