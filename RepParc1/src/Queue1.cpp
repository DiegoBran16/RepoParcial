/*
 * Queue1.cpp
 *
 *  Created on: 22/10/2017
 *      Author: diego
 */

#include "Queue1.h"
#include <iostream>
using namespace std;

Queue1::Queue1() {
	// TODO Auto-generated constructor stub
	for(int i =0; i<50; i++){
				array[i]=0;
			}

}

	int Queue1::getSize(){
		return size;
	}

	void Queue1::enqueue(int x){
			array[pos]=x;
			pos++;

	}
	int Queue1::dequeue(){
		for (int i =0; i<50;i++){
			if(array[i]!=0){
				return array[i];
				array[i]=0;
						size--;
						break;
			}
			else{
				return 0;
				cout<<"Cola vacia"<< endl;
				break;
			}
		}
	}
	int Queue1::front(){
		for (int i =0; i<50;i++){
					if(array[i]!=0){
						return array[i];
						break;


	}
		}
	}

