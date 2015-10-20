/**************************************************************
*	Author: Keyul Patel
* Date Created:			10/14/15
* Last Modification Date:	10/19/15
* Lab Number:			CST 211 Assignment 3
* Filename:				Iterator.h
*
*
*			Overview: A way of accessing nods by incrmenting and
*						decermnting this type
*
*			Input: none
*
*			Output: none
****************************************************************/

#include "Node.h"
#include <iostream>

using namespace std;

#ifndef Iterator_h
#define Iterator_h

template<class T>
class Iterator
{
public:

	template<class T> friend ostream &operator<<(ostream &os, const Iterator<T> &rhs);

	Iterator(Node<T> *in); // Constructor
	~Iterator(); //Destructor

	bool operator==(const Iterator &other); //== Operator overide
	bool operator!=(const Iterator &other); //!= Operator overide

	Iterator operator++(); //++ Operator overide
	Iterator operator++(int in); //++ Operator overide

	Iterator operator--(); //-- Operator overide
	Iterator operator--(int in); //-- Operator overide

	T node_data() const;

	

private:
	Node<T> *m_node; //Current node

};

#include "Iterator.inc"

#endif