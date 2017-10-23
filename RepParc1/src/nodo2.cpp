/*
 * nodo2.cpp
 *
 *  Created on: 22/10/2017
 *      Author: diego
 */

#include "nodo2.h"
#include <iostream>
using namespace std;
nodo2::nodo2(int numero) {
	// TODO Auto-generated constructor stub
	this-> num=numero;
				sig=NULL;
				ant=NULL;

}
string nodo2::getNumero(){
	return num;
}





