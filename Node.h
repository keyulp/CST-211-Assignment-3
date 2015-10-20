/**************************************************************
*	Author: Keyul Patel
* Date Created:			10/14/15
* Last Modification Date:	10/19/15
* Lab Number:			CST 211 Assignment 3
* Filename:				Node.h
*
*
*			Overview: A node containing a data and two pointer 
*						to the previous and next node
*
*			Input: none
*
*			Output: none
****************************************************************/

#ifndef Node_h
#define Node_h


template<class T>
class Node
{
public:

	Node(); //Constructor
	~Node(); // Destructor

	void data(T *in); //Mutator for m_data
	T data() ; // Accessor for m_data

	void next(Node *in); //Mutator for m_next
	Node *next() ; //Access for m_next

	void prev(Node *in); //Mutator for m_prev
	Node *prev() ; //Accessor for m_prev

private:
	T m_data;

	Node *m_next; // a pointer to the next node, if null then it is the tail
	Node *m_prev; // a pointer to the previous node, if null then it is the head

}; 

#include "Node.inc"

#endif