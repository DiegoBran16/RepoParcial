//============================================================================
// Name        : RepParc1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Stack1.h"

void reemplazar(Stack1 pila,int nuevo,int viejo){
	Stack1 temp=new Stack1();
	while(pila.isEmpty()==false){
		if (pila.top()!= viejo){
			temp.push(pila.pop());

		}if(pila.top()==viejo){
			pila.pop();
			temp.push(nuevo);
		}
	}
	while(temp.isEmpty()!=true){
		pila.push(temp.pop());
	}

}
int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Stack1 pila=new Stack1();
		pila.push(5);
		pila.push(6);
		pila.push(4);
		pila.push(5);
		pila.push(5);
		reemplazar(pila,3,5);
	return 0;

}
