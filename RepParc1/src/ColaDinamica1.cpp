/*
 * ColaDinamica1.cpp
 *
 *  Created on: 22/10/2017
 *      Author: diego
 */

#include "ColaDinamica1.h"
#include <iostream>
using namespace std;
#include <iostream>
#include "nodo.h"

ColaDinamica1::ColaDinamica1() {
	// TODO Auto-generated constructor stub
	head=tail=NULL;
}

		bool ColaDinamica1::isEmpty(){
			return (head==NULL);
		}


		void ColaDinamica1::enqueue(int numero)
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

		int ColaDinamica1::dequeue(){
			if(isEmpty()==true){
				cout << "No se puede retirar. Lista vacia"<< endl;
				return NULL;
			}
			else{
				if(head==tail){
					return first();
					head=tail==NULL;
					cout << "elemento eliminado"<< endl;
					size--;
				}
				else{
					nodo *tmp=head;
					head=head->sig;
					return tmp->getNumero();
					delete tmp;
					cout<< "elemento eliminado"<< endl;
					size--;
				}

			}
		}


		int ColaDinamica1::first(){
			if (isEmpty()==true){
				cout<< "lista esta vacia"<< endl;
				return NULL;
			}
			else{
				return head->getNumero();
			}

		}


		int ColaDinamica1::getSize(){
			return size;

		};


