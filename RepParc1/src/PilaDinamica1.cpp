/*
 * PilaDinamica1.cpp
 *
 *  Created on: 22/10/2017
 *      Author: diego
 */

#include "PilaDinamica1.h"
#include <iostream>
#include "nodo.h"
using namespace std;
PilaDinamica1::PilaDinamica1() {
	// TODO Auto-generated constructor stub
	head=tail=NULL;
}
		bool PilaDinamica1::isEmpty(){
			return (head==NULL);
		}

		void PilaDinamica1::push(int numero)
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

		int PilaDinamica1::pop(){
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

		int PilaDinamica1::top(){
			if (isEmpty()==true){
						cout<< "lista esta vacia"<< endl;
						return NULL;
					}
			else{
				return tail->getNumero();
			}

		}
		int PilaDinamica1::getSize(){
			return size;
		}


