#include "Interfaz.h"
#include <iostream>
using namespace std;
Interfaz::Interfaz(Control* g) {
	gestor = g;
}

void Interfaz::mostrarMenu()
{
	char o;
	static int i = 0;
	int p = 0;
	bool noSalir = true;


	do {
		system("cls");

		try{
			cout << "                                                    " << endl;
			cout << "                                                    " << endl;
            cout << " ---------------------------------------------------" << endl;
			cout << " ------------------------DAMAS----------------------" << endl;
			cout << "  1. Jugar" << endl;
			cout << "  2. Reglas del juego" << endl;
			cout << "  3. salir" << endl;
			cout << "                                                    " << endl;
			cout << " ---------------------------------------------------" << endl<< "Elija un #: ";


			switch (p = analizaOP()){
			case 1:
				menuJugador();
				break;
			case 2:
				reglasJuego();
				break;

			case 3:
			    cout << "estas seguro de que deseas salir(s/n)" << endl;
				cin >> o;
				if (o == 's'){
					noSalir = false;
					system("cls");
				}
				break;
			default:
				cout << "opcion no valida favor volver a digitar" << endl;
				break;

			}
		}
		catch (ExcepcionCaracter& e){
			cout << e.toString() << endl;
			cin.clear();
			cin.ignore(200, '\n');
			system("cls");
			mostrarMenu();
			p = NULL;
			system("cls");




		}
		catch (...){
			cout << "Error desconocido" << endl;
			cin.clear();
			cin.ignore(200, '\n');
			system("cls");
			mostrarMenu();
			p = NULL;
			system("cls");
		}


	} while (noSalir);

}
int Interfaz::analizaOP(){
	int x;
	if (cin >> x){
		return x;
	}
	else throw ExcepcionCaracter("El valor digitado no es una opcion");
}

void Interfaz::analizaString(string n){


	int i = 0;
	while (n[i] != '\0')
	{
		if (!isalpha(n[i]))
			throw ExcepcionString("Se ha introducido caracteres no validos");
		i++;
	}
}

void Interfaz::analizaNS(string a)
{
	int i = 0;
	while (a[i] != '\0')
	{
		if (isalpha(a[i]))
			throw ExcepcionInt("Se ha introducido caracteres invalidos");
		i++;
	}
}

//Excepcion*e = new Excepcion();
void Interfaz::menuJugador(){
	string nom1, nom2;
	int f1, f2;
	system("cls");
	cout << "Digite el nombre del jugador numero 1" << endl;
	cin >> nom1;
	system("cls");
	cout << nom1 << " digite '0' para escoger la ficha blanca o '1' para escoger la ficha negra";
	cin >> f1;
	Jugador *j1 = new Jugador(nom1,f1);
	system("cls");
	cout << "Digite el nombre del jugador numero 2" << endl;
	cin >> nom2;
	
	if (analizaColor(f1)==true&&f1==0){
		system("cls");
		cout << nom2 << " Usara las fichas Negras" << endl;
		system("Pause");
		system("cls");
	}
	else if (analizaColor(f1) == true && f1 == 1){
		system("cls");
		cout << nom2 << " usara las fichas blancas" << endl;
		system("Pause");
		system("cls");
	}
	else{
		system("cls");
		cout << "Color mal digitado" << endl;
		system("Pause");
		system("cls");
		menuJugador();
	}


}


	bool Interfaz::analizaColor(int x){
		if (x <=1){
			return true;
		}
		else{
			
			return false;
		}

	}
	void Interfaz::escogerMovimineto(int){


	}
	void Interfaz::escogerFicha(int, int){


	}
	void Interfaz::reglasJuego(){
		system("cls");
		cout << "________________________________________________________________________________________________________________________________________________________________________________" << endl;
		cout<<"Las damas es un juego para dos personas en un tablero de 64 casillas de 8 x 8 celdas"<<endl;
		cout<<"El tablero se coloca de manera que cada jugador tenga una casilla blanca en su parte inferior derecha " << endl;
		cout<<"Cada jugador dispone de 12 piezas de un mismo color(uno blanco y otro negro)" << endl;
		cout<<"Al principio de la partida se colocan en las casillas negras de las tres filas m�s pr�ximas a �l" << endl;
		cout<<"El objetivo del juego de damas es capturar las fichas del oponente o acorralarlas para que los �nicos movimientos que puedan realizar sean los que lleven a su captura" << endl;
		cout<<"Se juega por turnos alternos.Empieza a jugar quien tiene las fichas claras(blancas).En su turno cada jugador mueve una pieza propia" << endl;
        cout<<"Las piezas se mueven(cuando no comen) una posici�n adelante(nunca hacia atr�s) en diagonal a la derecha o a la izquierda, a una posici�n adyacente vac�a" << endl;
		cout << "________________________________________________________________________________________________________________________________________________________________________________" << endl;
		system("Pause");



	}