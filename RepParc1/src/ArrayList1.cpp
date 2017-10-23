/*
 * ArrayList1.cpp
 *
 *  Created on: 22/10/2017
 *      Author: diego
 */

#include "ArrayList1.h"
#include <iostream>
using namespace std;

ArrayList1::ArrayList1() {
	// TODO Auto-generated constructor stub
			frente=0;
			atras=-1;
}

	bool ArrayList1::isEmpty(){
		if(frente>atras){
			return true;
		}else{
			return false;
		}
	}
	bool ArrayList1::isFull(){
		if(atras==max-1){
			return true;
		}
		else{
			return false;
		}
	}
	int ArrayList1::size(){
		return atras+1;
	}
	void ArrayList1::addLast(int num){
		if(isFull()){
			cout<<"lista llena"<<endl;
		}
		else{
			lista[atras]=num;
			atras++;
			cout<<"elemento añadido"<<endl;
		}
		}
	void ArrayList1::addFirst(int num){
		if(isFull()){
				cout<<"lista llena"<<endl;
			}
			else{
				for(int i= atras+1;i<frente; i--){
					lista[i]=lista[i-1];
					lista[atras]=num;
					atras++;
					cout<<"elemento añadido"<<endl;
				}

			}
	}
	void ArrayList1::addInPos(int num, int pos){
		if(isFull()){
					cout<<"lista llena"<<endl;
				}
				else{
					if(pos>frente && pos< atras){
						for(int i= atras+1;i<pos; i--){
						lista[i]=lista[i-1];
						lista[pos]=num;
						atras++;
						cout<<"elemento añadido"<<endl;
						}


					} else{
						cout<<" posicion invalida"<<endl;
											}
					}
				}
	bool ArrayList1::removeLast(int &num){
		if(isEmpty()){
			num=lista[atras];
			atras--;
			return true;
		}else
		{
			return false;
		}
	}
	bool ArrayList1::removeFirst(int &num){
		if(isEmpty()){
				num=lista[frente];
				for(int i=frente; i<atras; i++){
					lista[i]=lista[i+1];
				}
				atras--;
				return true;
			}else
			{
				return false;
			}
	}
	bool ArrayList1::removePos(int &num, int pos){
		if(isEmpty()){
			if(pos>frente && pos< atras){

				num=lista[pos];
				for(int i= pos;i<atras; i++){
					lista[i]=lista[i+1];
				}
				return true;
				atras--;
		}else{
			return false;
		}

	}else{
		return false;
	}
	}
	bool ArrayList1::returnFirst(int &num){
		if(isEmpty()){
					return false;
				}else{
					num=lista[frente];
						atras--;
						return true;
				}

	}
	bool ArrayList1::returnLast(int &num){
		if(isEmpty()){
			return false;
		}else{
		num=lista[atras];
		atras--;
		return true;
					}
	}

