//
// Created by artv23 on 03/10/16.
//
#include<iostream>
#include<sstream>
#include<string>
#include "ListaOrdenable.h";
#include"Tableroh.h"
#include"Interfaz.h"
#include"Control.h"
#include "stdio.h"
#include "stdlib.h" 

using namespace std;

int main(){

    ListaOrdenable* listaBlancas = new ListaOrdenable();
    ListaOrdenable* listaNegras = new ListaOrdenable();

    for(int i=0; i < 4; i++)
        listaBlancas->addLast(new Ficha(0,i));

    for(int i=0; i < 4; i++)
        listaNegras->addLast(new Ficha(1,i));


    cout << "Negras" << endl;
    cout << listaNegras->toString() << endl;

    cout << "\n Blancas" << endl;
    cout << listaBlancas->toString() << endl;

    listaNegras->operator[](3)->coronar();
    listaNegras->operator[](1)->coronar();

    cout << "corona" << endl;
    cout << listaNegras->toString() << endl;

    /*cout << "\n Prueba de intercambio b c/ b" << endl;
    //listaBlancas->swapNodo(0,listaBlancas->locate(3));*/

    cout << listaBlancas->toString() << endl;

    cout << "\n Prueba de intercambio b c/ n" << endl;
    listaBlancas->swapNodo(0,listaNegras->locate(3));

    cout << "\nBlancas" << endl;
    cout << listaBlancas->toString() << endl;

    cout << "\n Negras" << endl;
    cout << listaNegras->toString() << endl;
	
	/*Tablero*t1 = new Tablero();
	 t1->preparatablero();
	 t1->mostrarTablero();
	 cout << endl;*/
	
	/*Control*c1 = new Control();
	c1->iniciar();
	system("Pause");
*/
 return 0;
}