
#include "Jugador.h"

Jugador::Jugador(){
	nombre = " ";
	color = 0;
		
}

Jugador::Jugador(string nombre, int c) {
	nombre = nombre;
	color = c;
	
}

void Jugador::setNombre(string nom){
	nombre = nom;
}
void Jugador::setColor(int c){
	color = c;
}

string Jugador:: getNombre(){
	return nombre;
}
int Jugador::getColor() {
	return color;
}

Ficha* Jugador::getFicha(int f) {
	return fichasdelJugador[f];
}

string Jugador::toString(){
	stringstream s;
	cout << "Nombre: " << nombre << endl;
	if (color == 0){
		cout << "Color Negro" << endl;
	}
	else{
		cout << "Color Blanco" << endl;
	}
	return s.str();
}

Jugador::~Jugador() {
}