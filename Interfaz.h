#pragma once
#include "Control.h"
#include"Excepcion.h"
class Control;

class Interfaz {
private:
	Control* gestor;
public:
	Interfaz(Control*);
	virtual void mostrarMenu();
private:
	//--------exepciones----------
	void analizaString(string);
	void analizaNS(string);
	int analizaOP();
	bool analizaColor(int);
  //jugar
	void menuJugador();
	void reglasJuego();
	int colorFicha();
	void escogerMovimineto(int);
	void escogerFicha(int,int);
};