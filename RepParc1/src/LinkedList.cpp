/*
 * LinkedList.cpp
 *
 *  Created on: 22/10/2017
 *      Author: diego
 */

#include "LinkedList.h"
#include "nodo.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList() {
	// TODO Auto-generated constructor stub
this->head=this->tail=NULL;
this->size=0;
}

bool  LinkedList::isEmpty(){
	return (head==NULL);
}
void LinkedList::addFirst(int numero){
	nodo *temp =new nodo(numero);
			if(isEmpty()==true){
				head=tail=temp;
				size++;
			}
			else{
				temp->sig=head;
				head=temp;
				size++;

			}
}
void LinkedList::addLast(int numero){
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
		int LinkedList::getSize(){
				return size;
			}
void LinkedList::removeFirst(){
	if(isEmpty()==true){
				cout << "No se puede eliminar. Lista vacia"<< endl;

			}
			else{
				if(head==tail){
					head==tail==NULL;
					cout << "elemento eliminado"<< endl;
					size--;
				}
				else{
					nodo *tmp=head;
					head=head->sig;
					delete tmp;
					cout<< "elemento eliminado"<< endl;
					size--;
				}

			}

}

void LinkedList::removeLast(){
	if(isEmpty()==true){
			cout << "No se puede eliminar. Lista vacia"<< endl;
		}
		else {
			nodo *aux=head;
			while(aux!=NULL){
				if(head==tail){

					head=tail=NULL;
					cout<< "elemento eliminado"<< endl;
					size--;
				}
				else if(aux->sig==tail){
								nodo *temp = tail;
								tail=aux;
								tail->sig=NULL;
								delete temp;
								cout<<"elemento eliminado"<<endl;
								size--;
							}
						}
			}

}
int LinkedList::first(){
	if (isEmpty()==true){
				cout<< "lista esta vacia"<< endl;
				return NULL;
			}
			else{
				return head->getNumero();
			}

}
int LinkedList::last(){
	if (isEmpty()==true){
					cout<< "lista esta vacia"<< endl;
					return NULL;
				}
		else{
			return tail->getNumero();
		}
}




