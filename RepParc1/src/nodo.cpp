/*
 * nodo.cpp
 *
 *  Created on: 21/10/2017
 *      Author: diego
 */

#include "nodo.h"
#include <iostream>
using namespace std;

nodo::nodo(int numero){
	// TODO Auto-generated constructor stub
	this->num=numero;
	this->sig=NULL;
}

int nodo::getNumero(){
	return num;
}





