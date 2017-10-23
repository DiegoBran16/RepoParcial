/*
 * nodo2.h
 *
 *  Created on: 22/10/2017
 *      Author: diego
 */

#ifndef NODO2_H_
#define NODO2_H_
#include <iostream>
using namespace std;
class nodo2 {
private:
	int num;
public:
	nodo2 *sig;
	nodo2 *ant;
	nodo2(int numero);
	string getNumero();

};

#endif /* NODO2_H_ */
