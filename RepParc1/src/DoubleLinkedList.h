/*
 * DoubleLinkedList.h
 *
 *  Created on: 22/10/2017
 *      Author: diego
 */

#ifndef DOUBLELINKEDLIST_H_
#define DOUBLELINKEDLIST_H_
#include <iostream>
using namespace std;
#include "nodo2.h"

class DoubleLinkedList {
private:
	nodo2 *head;
	nodo2 *tail;
	int size=0;

public:
	DoubleLinkedList();
	bool isEmpty();
	int getSize();
	void addFirst(int num);

	void addLast(int num);

	void removeFirst();
	void removeLast();
	int first();
	int last();



};

#endif /* DOUBLELINKEDLIST_H_ */
