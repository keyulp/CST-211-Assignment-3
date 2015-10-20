/**************************************************************
*	Author: Keyul Patel
* Date Created:			10/14/15
* Last Modification Date:	10/19/15
* Lab Number:			CST 211 Assignment 3
* Filename:				LinkedList.inc
*
*
*			Overview: A Linked List used to store data
*
*			Input: none
*
*			Output: none
****************************************************************/

template<class T>
LinkedList<T>::LinkedList()
{

}


template<class T>
LinkedList<T>::~LinkedList()
{
}



template<class T>
bool LinkedList<T>::isEmpty() const
{
	return !(m_tail || m_head);
}


template<class T>
const Node<T> &LinkedList<T>::First()
{
	return m_head;
}


template<class T>
const Node<T> &LinkedList<T>::Last()
{
	return m_tail;
}


template<class T>
void LinkedList<T>::Prepend(T *in)
{
	if (isEmpty()){
		m_tail = new Node < T >;
		m_head = new Node < T >;
		m_tail->data(in);
		m_head->data(in);
		m_tail->prev(m_head);
		m_head->next(m_tail);
	}
	else{
		m_tail->prev()->data(in);
		m_tail->prev()->next(m_tail);
		m_tail = m_tail->prev();
	}
}


template<class T>
void LinkedList<T>::Append(T *in)
{
	
	if (isEmpty()){
		m_tail = new Node < T >;
		m_head = new Node < T >;
		m_tail->data(in);
		m_head->data(in);
		m_tail->prev(m_head);
		m_head->next(m_tail);
	}
	else{
		m_tail->next()->data(in);
		m_tail->next()->prev(m_tail);
		m_tail = m_tail->next();
	}
}


template<class T>
void LinkedList<T>::Purge()
{
	
}


template<class T>
Node<T> &LinkedList<T>::extract(T in)
{

}


template<class T>
void LinkedList<T>::InsertAfter(T in, T *thing)
{

}


template<class T>
void LinkedList<T>::InsertBefore(T in, T *thing)
{

}


template<class T>
Iterator<T> LinkedList<T>::begin()
{
	Iterator<T> fill(m_head);
	return fill;
}


template<class T>
Iterator<T> LinkedList<T>::end()
{
	Iterator<T> fill(m_tail);
	return fill;
}