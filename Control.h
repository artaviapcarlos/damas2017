#pragma once
#include"Interfaz.h"
#include"Ficha.h"
#include"Jugador.h"
#include"ListaOrdenable.h"
#include"Tableroh.h"
class Interfaz;

class Control{

private:
	Jugador*jugador;
	Interfaz*vista;

public:
	Control(void);
	virtual void iniciar() const;
	virtual void salir();








};