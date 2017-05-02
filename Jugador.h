#pragma once
#include"Ficha.h"
#include <iostream>
#include <string>
#include<sstream>


using namespace std;


class Jugador{
private:
	string nombre;
	int color;
	Ficha *fichasdelJugador[12];
	
public:
	Jugador();
	Jugador(string,int);
	void setNombre(string);
	void setColor(int);
	string getNombre();
	int getColor();
    Ficha * getFicha(int);
	string toString();
	~Jugador();
};