/*
 * LinkedList.h
 *
 *  Created on: 22/10/2017
 *      Author: diego
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include "nodo.h"

class LinkedList {
private:
	nodo *head;
	nodo *tail;
	int size;
public:


	LinkedList();
	bool isEmpty();
	void addFirst(int numero);
	void addLast(int numero);

	void removeFirst();
	void removeLast();

	int first();
	int last();
	int getSize();
};

#endif /* LINKEDLIST_H_ */
