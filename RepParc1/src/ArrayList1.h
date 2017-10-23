/*
 * ArrayList1.h
 *
 *  Created on: 22/10/2017
 *      Author: diego
 */

#ifndef ARRAYLIST1_H_
#define ARRAYLIST1_H_
#include <iostream>
using namespace std;

class ArrayList1 {
private:
	int max=100;
	int lista[100];
	int frente;
	int atras;
public:
	ArrayList1();
	bool isEmpty();
	bool isFull();
	int size();
	void addLast(int num);

	void addFirst(int num);
	void addInPos(int num, int pos);
	bool removeLast(int &num);
	bool removeFirst(int &num);
	bool removePos(int &num, int pos);
	bool returnFirst(int &num);
	bool returnLast(int &num);

};

#endif /* ARRAYLIST1_H_ */
