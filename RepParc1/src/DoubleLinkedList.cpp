/*
 * DoubleLinkedList.cpp
 *
 *  Created on: 22/10/2017
 *      Author: diego
 */

#include "DoubleLinkedList.h"
#include "nodo2.h"
#include <iostream>
using namespace std;
DoubleLinkedList::DoubleLinkedList() {
	// TODO Auto-generated constructor stub
	head=tail=NULL
}
bool DoubleLinkedList::isEmpty(){
	return (head==NULL);

}
	int DoubleLinkedList::getSize(){
		return size;
	}
	void DoubleLinkedList::addFirst(int num){
		nodo2 *temp=new nodo2(num);
				if(isEmpty()==true){
					head=tail=temp;
					size++;
				}else{
					temp->sig=head;
					head->ant=temp;
					head=temp;
					size++;
				}
	}

	void DoubleLinkedList::addLast(int num){
				nodo2 *temp=new nodo2(num);
					if(isEmpty()==true){
						head=tail=temp;
						size++;
					}else{
						tail->sig=temp;
						temp->ant=tail;
						tail=temp;
						size++;
					}

	}

	void DoubleLinkedList::removeFirst(){
		if (isEmpty()==true){
					cout<< "no se puede eliminar, la lista esta vacia"<< endl;
				}
				else{
					nodo2 *temp=head;
					head=head->sig;
					head->ant=NULL;
					delete temp;
					cout<< "elemento eliminado"<< endl;
					size--;

				}

	}
	void DoubleLinkedList::removeLast(){
		if (isEmpty()==true){
				cout<< "no se puede eliminar, la lista esta vacia"<< endl;
				}
				else if(head==tail){
					head=tail=NULL;
					size--;
				}
				else{
					nodo2 *temp=tail;
					tail=tail->ant;
					tail->sig=NULL;
					delete temp;
					cout<< "elemento eliminado"<< endl;
					size--;
				}

	}
	int DoubleLinkedList::first(){
		if (isEmpty()==true){
					cout<< "lista esta vacia"<< endl;
					return NULL;
				}
				else{
					return head->getNumero();
				}


	}
	int DoubleLinkedList::last(){
		if (isEmpty()==true){
							cout<< "lista esta vacia"<< endl;
							return NULL;
						}
				else{
					return tail->getNumero();
				}

	}


