#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "ListaOrdenable.h"
using namespace std;


class Tablero {
private:
    ListaOrdenable* upCross1;
    ListaOrdenable* upCross2;
    ListaOrdenable* upCross3;
    ListaOrdenable* upCross4;
    ListaOrdenable* upCross5;
    ListaOrdenable* upCross6;
    ListaOrdenable* upCross7;
    ListaOrdenable* upCross8;

    ListaOrdenable* downCross1;
    ListaOrdenable* downCross2;
    ListaOrdenable* downCross3;
    ListaOrdenable* downCross4;
    ListaOrdenable* downCross5;
    ListaOrdenable* downCross6;
    ListaOrdenable* downCross7;
	ListaOrdenable* downCross8;

	Ficha* tablero[8][8];

public:
	Tablero();
	void llenarListas();
	void llenarTablero();
	void preparatablero();
	Ficha* buscaUnaFicha(int, int);
	void conectarFilaDeVecinos(int, int);
	void conectarTodos();
	void MostarListadeListas();
	void mostrarTablero();
	~Tablero();
};