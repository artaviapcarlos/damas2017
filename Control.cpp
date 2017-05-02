#include"Control.h"

Control::Control(){
	vista = new Interfaz(this);
	jugador = new Jugador();
}
void Control::iniciar() const {
	vista->mostrarMenu();
	}
void Control::salir(){
	delete jugador;
}