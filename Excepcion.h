#pragma once
#include"Interfaz.h"
#include<iostream>
#include <sstream>
#include<string>
using namespace std;

class Excepcion
{
private:
	string mensaje;
public:
	Excepcion()
	{


	}
	Excepcion(string m)
	{
		this->mensaje = m;

	}

	virtual ~Excepcion()
	{


	}

	virtual string toString()const{
		stringstream s;
		s << "Error: " << mensaje << endl;
		return s.str();
	}

	//virtual void analiza() = 0;
};

class ExcepcionString :public Excepcion{
private:
	string mensaje;
public:
	ExcepcionString() :Excepcion(){}
	ExcepcionString(string m) :Excepcion(m){ 
	mensaje=m; }
	string toString(){ stringstream s; s << mensaje << endl; return s.str(); }

};

class ExcepcionInt :public Excepcion{
private:
	string mensaje;
public:
	ExcepcionInt() :Excepcion(){}
	ExcepcionInt(string m) :Excepcion(m){
		mensaje = m;
	}
	string toString(){ stringstream s; s << mensaje << endl; return s.str(); }

};

class ExcepcionCaracter :public Excepcion{
private:
	string mensaje;
public:
	ExcepcionCaracter() :Excepcion(){}
	ExcepcionCaracter(string m) :Excepcion(m){
		mensaje = m;
	}
	string toString(){ stringstream s; s << mensaje << endl; return s.str(); }

};
	