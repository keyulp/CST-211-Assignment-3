/**************************************************************
*	Author: Keyul Patel
* Date Created:			10/14/15
* Last Modification Date:	10/19/15
* Lab Number:			CST 211 Assignment 3
* Filename:				LinkedList.h
*
*
*			Overview: A Linked List used to store data
*
*			Input: none
*
*			Output: none
****************************************************************/

#include "Node.h"
#include "Iterator.h"

#ifndef LinkedList_h
#define LinkedList_h

template<class T>
class LinkedList
{

public:

	LinkedList(); // Constructor
	~LinkedList(); //Destructor

	bool isEmpty() const; //Returns if the list is empty
	const Node<T> &First(); // Returns the first node
	const Node<T> &Last(); // Returns the last node

	void Prepend(T *in); // Adds an item to the start of the list
	void Append(T *in); // Adds an item to the end of the list
	void Purge(); // Removes all items in the list

	Node<T> &extract(T in); // Pulls an item out from the list using the in
	void InsertAfter(T in, T *thing); // Inserts an item after another
	void InsertBefore(T in, T *thing); // Inserts an item before another
	Iterator<T> begin(); // Iterator to the start of the list
	Iterator<T> end(); // Iterator to the end of the list


private:
	Node<T> *m_tail; //Pointer to the end of the list
	Node<T> *m_head; //Pointer to the start of the list
};
#include "LinkedList.inc"

#endif