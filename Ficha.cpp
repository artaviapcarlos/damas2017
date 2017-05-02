//
// Created by artv23 on 30/09/16.
//
#include "Ficha.h"
Ficha::Ficha() :color(NULL), corona(false), num(NULL),figura('o'){}
Ficha::Ficha(int color, int num) : color(color), corona(false), num(num),figura('O') { }

int Ficha::getColor() const {
    return color;
}

void Ficha::setColor(int color) {
    this->color = color;
}

bool Ficha::getCorona() const {
    return corona;
}

void Ficha::setCorona(bool corona) {
    this->corona = corona;
}

void Ficha::coronar() {
    corona = true;
}

int Ficha::getNum() {
    return num;
}

void Ficha::setNum(int num) {
    this->num = num;
}

string Ficha::toString() {
    stringstream s;

	if (color == 2){
		
		s << " ";
		
		
	}
	
	if (color == 1){
		
		s << figura;
		
	}
	
	if (color == 0){
		
		s <<figura;
		
	}
	
    if(corona)
        s << "( "<< figura<<" )";

    return s.str();
}