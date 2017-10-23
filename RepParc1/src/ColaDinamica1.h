/*
 * ColaDinamica1.h
 *
 *  Created on: 22/10/2017
 *      Author: diego
 */

#ifndef COLADINAMICA1_H_
#define COLADINAMICA1_H_
#include <iostream>
#include "nodo.h"
using namespace std;

class ColaDinamica1 {

	private:
			nodo *head;
			nodo *tail;
	public:
			int size=0;
		ColaDinamica1();
		bool isEmpty();

		void enqueue(int numero);

		int dequeue();

		int first();


		int getSize();


#endif /* COLADINAMICA1_H_ */
