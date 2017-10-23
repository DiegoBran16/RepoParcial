/*
 * Stack1.h
 *
 *  Created on: 22/10/2017
 *      Author: diego
 */

#ifndef STACK1_H_
#define STACK1_H_
#include <iostream>
using namespace std;
class Stack1 {
public:
	int size=0;
	int array[10];
	Stack1();
	int getSize();

	bool isEmpty();
	void push(int num);
	int pop();

	int top();
};

#endif /* STACK1_H_ */
