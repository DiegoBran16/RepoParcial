/*
 * ListaCircularR.h
 *
 *  Created on: 22/10/2017
 *      Author: diego
 */

#ifndef LISTACIRCULARR_H_
#define LISTACIRCULARR_H_
#include <iostream>
#include "nodo.h"
using namespace std;

class ListaCircularR {
private:
			nodo *tail;
			nodo *head;
			int size=0;
public:

		ListaCircularR();
		bool isEmpty();
		void addFirst(int num);
		void addLast(int num);
		void removeFirst();
		void removeLast();
		int last();
		int first();
};

#endif /* LISTACIRCULARR_H_ */
