/*
 * nodo.h
 *
 *  Created on: 21/10/2017
 *      Author: diego
 */

#ifndef NODO_H_
#define NODO_H_
#include <iostream>
using namespace std;

class nodo{
public:
	int num;
	nodo *sig;
	nodo(int numero);
	nodo();
	int getNumero();

};

#endif /* NODO_H_ */
