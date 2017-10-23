/*
 * Queue1.h
 *
 *  Created on: 22/10/2017
 *      Author: diego
 */

#ifndef QUEUE1_H_
#define QUEUE1_H_
#include <iostream>
using namespace std;


class Queue1 {

	private:
		int array[50];
		int size=0;
		int pos=0;
	public:
		Queue1(){
			for(int i =0; i<50; i++){
				array[i]=0;
			}
		}
		int getSize(){
			return size;
		}

		void enqueue(int x){
				array[pos]=x;
				pos++;

		}
		int dequeue(){
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
		int front(){
			for (int i =0; i<50;i++){
						if(array[i]!=0){
							return array[i];
							break;


		}
			}
		}
};

#endif /* QUEUE1_H_ */
