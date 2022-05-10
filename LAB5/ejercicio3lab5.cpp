/*Construya una lista enlazada simple utilizando solo punteros. Añada las funciones de
insertar y eliminar un elemento. En la función insertar se debe asegurar que los
números insertados estén en orden creciente. Simule el proceso con 10000 números
aleatorios sin que el programa falle.*/
#include <iostream>
#include <cstdio>
#include <stdlib.h>

using namespace std;

class Node{
	public:
		int data;
		Node *next;//pointer to struct Node
};

void printList(Node *);
void push(Node** , int);
void deleteNode(Node**, int );
//list whith 
int main(){
	
	Node* head = NULL;
	Node* second = NULL;
	Node* third =NULL;
	//allocate thir node in the heap 
	head= new Node();
	second=new Node();
	third= new Node();
	//insert data three nodes
	head->data=10;
	head->next = second;
	
	second->data=2;
	second ->next=third;
	
	third->data=3;
	third->next=NULL;
	

	for(int i=0; i<5 ;i++){
		push(&head,rand()%100);
	}
	cout<<"\n";
	printList(head);
	cout<<"\n ";
	puts("Eliminando elemento 3");
	deleteNode(&head,3);
	printList(head);
	
	
	return 0;
}

void printList(Node *k){
	while(k!= NULL){
		cout<<k->data<<" ";
		k=k->next;
	}
}
void push(Node** head, int new_data)
{
    Node* new_node = new Node();//reservamos espacio de memoria para  el nuevo nodo
    new_node->data = new_data;//ingresamos el dato al nodo 
    new_node->next = (*head);//el nuevo nodo es la nueva cabeza
    (*head) = new_node;
}	
void deleteNode(Node** head_ref, int key)
{
     
    Node* temp = *head_ref;
    Node* prev = NULL;
    
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next; // Changed head
        delete temp;            // la cabecera esta libre 
        return;
    }
 
    // Else Search for the key to be deleted,
    // keep track of the previous node as we
    // need to change 'prev->next' */
      else
    {
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
 
    // If key was not present in linked list
    if (temp == NULL)
        return;
 
    // Unlink the node from linked list
    prev->next = temp->next;
 
    // Free memory
    delete temp;
    }
}
