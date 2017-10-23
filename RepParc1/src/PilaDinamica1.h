/*
 * PilaDinamica1.h
 *
 *  Created on: 22/10/2017
 *      Author: diego
 */

#ifndef PILADINAMICA1_H_
#define PILADINAMICA1_H_
#include <iostream>
#include "nodo.h"
using namespace std;
class PilaDinamica1 {
	private:
			nodo *head;
			nodo *tail;
	public:
			int size=0;
		PilaDinamica1(){
			head=tail=NULL;
		}
		bool isEmpty(){
			return (head==NULL);
		}

		void push(int numero)
		{
			nodo *temp =new nodo(numero);
			if(isEmpty()==true){
						head=tail=temp;
						size++;
					}
			else{
				tail->sig=temp;
				tail=temp;
				size++;
			}
		}

		int pop(){
			if(isEmpty()==true){
				cout << "No se puede retirar. Lista vacia"<< endl;
				return NULL;
			}
			else {
				nodo *aux=head;
				while(aux!=NULL){
					if(head==tail){
						return top();
						head=tail=NULL;
						cout<< "elemento retirado"<< endl;
						size--;
						break;
					}
					else if(aux->sig==tail){
									nodo *temp = tail;
									tail=aux;
									tail->sig=NULL;
									return temp->getNumero();
									delete temp;
									cout<<"elemento retirado"<<endl;
									size--;
									break;
								}
							}
				return NULL;
				}

		}

		int top(){
			if (isEmpty()==true){
						cout<< "lista esta vacia"<< endl;
						return NULL;
					}
			else{
				return tail->getNumero();
			}

		}
		int getSize(){
			return size;
		}

};

#endif /* PILADINAMICA1_H_ */
