#pragma once

#include<iostream>

using namespace std;

template<class T>
class Nodo {
protected:
    T *elemento;

    Nodo<T> *upLeft;
    Nodo<T> *upRight;
    Nodo<T> *downLeft;
    Nodo<T> *downRight;
    int col;

public:
    Nodo(T *, Nodo<T> *up1 = NULL, Nodo<T> *up2 = NULL, Nodo<T> *down1 = NULL, Nodo<T> *down2 = NULL);

    virtual T *getElemento() const;

    virtual Nodo *getUpLeft() const;

    virtual Nodo *getUpRight() const;

    virtual Nodo *getDownLeft() const;

    virtual Nodo *getDownRight() const;

    virtual void setUpLeft(Nodo<T> *);

    virtual void setUpRight(Nodo<T> *);

    virtual void setDownLeft(Nodo<T> *);

    virtual void setDownRight(Nodo<T> *);

    virtual ~Nodo();
};

template<class T>
Nodo<T>::Nodo(T *dato, Nodo<T> *up1, Nodo<T> *up2, Nodo<T> *down1, Nodo<T> *down2) {
    this->upLeft = up1;
    this->upRight = up2;

    this->downLeft = down1;
    this->downRight = down2;

    this->elemento = dato;
}

template<class T>
T *Nodo<T>::getElemento() const {
    return elemento;
}

template<class T>
Nodo<T> *Nodo<T>::getUpLeft() const {
    return upLeft;
}

template<class T>
void Nodo<T>::setUpLeft(Nodo<T> *upLeft) {
    this->upLeft = upLeft;
}

template<class T>
Nodo<T> *Nodo<T>::getUpRight() const {
    return upRight;
}

template<class T>
void Nodo<T>::setUpRight(Nodo<T> *upRight) {
    this->upRight = upRight;
}

template<class T>
Nodo<T> *Nodo<T>::getDownLeft() const {
    return downLeft;
}

template<class T>
void Nodo<T>::setDownLeft(Nodo<T> *downLeft) {
    this->downLeft = downLeft;
}

template<class T>
Nodo<T> *Nodo<T>::getDownRight() const {
    return downRight;
}

template<class T>
void Nodo<T>::setDownRight(Nodo<T> *downRight) {
    this->downRight = downRight;
}

template<class T>
Nodo<T>::~Nodo() {

}