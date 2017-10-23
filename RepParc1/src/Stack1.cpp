/*
 * Stack1.cpp
 *
 *  Created on: 22/10/2017
 *      Author: diego
 */

#include "Stack1.h"
#include <iostream>
using namespace std;
Stack1::Stack1() {
	// TODO Auto-generated constructor stub
	for(int i=0;i<10;i++){
					array[i]=0;
				}
}

	int Stack1::getSize(){
		return size;
	}

	bool Stack1::isEmpty(){
		if (size==0){
			return true;
		}
		return false;
	}
	void Stack1::push(int num){
		for(int i=0; i<10;i++){
			if(array[i]!=0){
				array[i]=num;
				size++;
				break;
			}
			else{
				cout<<"pila llena"<< endl;
				break;
			}
		}


	}

	int Stack1::pop(){

		if (size!= 0){
			return array[size-1];
		}else {
			return 0;
			cout<< "pila vacia"<< endl;
		}
	}

	int Stack1::top()
	{
		if(isEmpty()==true){
			return 0;
			cout<< "pila vacia"<< endl;
		} else{
			return array[size-1];
		}
	}

