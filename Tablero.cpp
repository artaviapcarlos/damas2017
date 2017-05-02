#include"Tableroh.h"
#include "stdio.h"
#include "stdlib.h" 

Tablero::Tablero(){
	
	blanca0 = new ListaOrdenable();
	blanca1 = new ListaOrdenable();
	blanca2 = new ListaOrdenable();
	negra0 = new ListaOrdenable();
	negra1 = new ListaOrdenable();
	negra2 = new ListaOrdenable();
	medio0 = new ListaOrdenable();
	medio1 = new ListaOrdenable();
	
}

void Tablero::preparatablero(){
	for (int i = 0; i < 8; i++){
		if (i % 2 == 0){
			blanca0->addLast(new Ficha(0, i));
			blanca2->addLast(new Ficha(0, i));
			negra0->addLast(new Ficha(1, i));
			negra2->addLast(new Ficha(1, i));

		}

		else{
			blanca0->addLast(new Ficha(2, i));
			blanca2->addLast(new Ficha(2, i));
			negra0->addLast(new Ficha(2, i));
			negra2->addLast(new Ficha(2, i));
		}
	}
	for (int i = 0; i < 8; i++){
		if (i % 2 != 0){
			blanca1->addLast(new Ficha(0, i));
			negra1->addLast(new Ficha(1, i));
		}
		else{
			
			blanca1->addLast(new Ficha(2, i));
			negra1->addLast(new Ficha(2, i));

		}
	}

	for (int i = 0; i < 8; i++){
		medio0->addLast(new Ficha(2, i));
		medio1->addLast(new Ficha(2, i));
		
	}
	
}



void Tablero::mostrarTablero(){
	cout << endl << endl;
	cout << "  0  1  2  3  4  5  6  7" << endl;
	//cout << " " << endl;
	cout <<"0"<< blanca0->toString();
	//cout << "______________________________________________________ " << endl;
	cout <<"1"<< blanca1->toString();
	//cout << "______________________________________________________ " << endl;
	cout <<"2"<< blanca2->toString();
	//cout << "______________________________________________________ " << endl;
	cout <<"3"<< medio0->toString();
	//cout << "______________________________________________________ " << endl;
	cout <<"4"<< medio1->toString();
	//cout << "______________________________________________________ " << endl;
	cout <<"5"<< negra0->toString();
	//cout << "______________________________________________________ " << endl;
	cout <<"6"<< negra1->toString();
	//cout << "______________________________________________________ " << endl;
	cout <<"7"<< negra2->toString();
	//cout << "______________________________________________________ " << endl;*/
}

