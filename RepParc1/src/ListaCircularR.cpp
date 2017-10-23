/*
 * ListaCircularR.cpp
 *
 *  Created on: 22/10/2017
 *      Author: diego
 */

#include "ListaCircularR.h"
#include "nodo.h"
#include <iostream>
using namespace std;

ListaCircularR::ListaCircularR() {
	// TODO Auto-generated constructor stub
	head=tail=NULL;
}
bool ListaCircularR::isEmpty(){
		return (tail==NULL);
	}
	void ListaCircularR::addFirst(int num){
		nodo *temp= new nodo(num);
				if(isEmpty()==true){
					tail=temp;
					size++;
				}
				else{
					temp->sig=tail;
					tail->sig=temp;
					size++;
				}

	}
	void ListaCircularR::addLast(int num){
		nodo *temp= new nodo(num);
				nodo *head;
				if(isEmpty()==true){
							tail=temp;
							size++;
						}
				else{
					tail->sig=temp;
					head=tail->sig;
					temp->sig=head;
					size++;
				}
	}

	}
	void ListaCircularR::removeFirst(){
		if(isEmpty()==true){
							cout << "No se puede eliminar. Lista vacia"<< endl;
				}else{
					nodo *head=tail->sig;
					if(tail==head){
						tail=head=NULL;
						cout<< "elemento eliminado"<< endl;
						size--;
					}
					else{
						nodo *temp=head;
						head=head->sig;
						tail->sig=head;
						delete temp;
						size--;
						cout<< "elemento eliminado"<< endl;
					}
				}

	}
	void ListaCircularR::removeLast(){
		if(isEmpty()==true){
								cout << "No se puede eliminar. Lista vacia"<< endl;
			}
			else{
				nodo *head=tail->sig;
							if(tail==head){
								tail=head=NULL;
								cout<< "elemento eliminado"<< endl;
								size--;
							}
							else{
								bool seguir= true;
								nodo *aux=head;
								while(seguir==true){
									if(aux->sig==tail){
										nodo *temp=tail;
										tail=aux;
										tail->sig=head;
										delete temp;
										cout<< "elemento eliminado"<< endl;
										size--;
										seguir=false;

									}
									else{
										aux=aux->sig;
									}
								}
							}

			}

	}
	int ListaCircularR::last(){
		if (isEmpty()==true){
							cout<< "lista esta vacia"<< endl;
							return NULL;
						}
				else{
					return tail->getNumero();
				}

	}
	int ListaCircularR::first(){
		if (isEmpty()==true){
								cout<< "lista esta vacia"<< endl;
								return NULL;
							}
							else{
								return tail->sig->getNumero();
							}

	}


