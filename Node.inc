/**************************************************************
*	Author: Keyul Patel
* Date Created:			10/14/15
* Last Modification Date:	10/19/15
* Lab Number:			CST 211 Assignment 3
* Filename:				Node.inc
*
*
*			Overview: A node containing a data and two pointer
*						to the previous and next node
*
*			Input: none
*
*			Output: none
****************************************************************/

template<class T>
Node<T>::Node()
{
	
}

template<class T>
Node<T>::~Node()
{
	
}

template<class T>
void Node<T>::data(T *in)
{
	m_next = new Node < T > ;
	m_prev = new Node < T >;
	m_data = *in;
}

template<class T>
T Node<T>::data() 
{
	return m_data;
}


template<class T>
void Node<T>::next(Node *in)
{
	m_next = in;
}

template<class T>
Node<T> *Node<T>::next() 
{
	return m_next;
}


template<class T>
void Node<T>::prev(Node *in)
{
	m_prev = in;
}

template<class T>
Node<T> *Node<T>::prev()
{
	return m_prev;
}