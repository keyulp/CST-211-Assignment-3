/**************************************************************
*	Author: Keyul Patel
* Date Created:			10/14/15
* Last Modification Date:	10/19/15
* Lab Number:			CST 211 Assignment 3
* Filename:				Iterator.inc
*
*
*			Overview: A way of accessing nods by incrmenting and
*						decermnting this type
*
*			Input: none
*
*			Output: none
****************************************************************/

template<class T>
Iterator<T>::Iterator(Node<T> *in) : m_node(in)
{

}

template<class T>
Iterator<T>::~Iterator()
{
}


template<class T>
bool Iterator<T>::operator==(const Iterator& other)
{
	return node_data() == other.node_data();
}

template<class T>
bool Iterator<T>::operator!=(const Iterator& other)
{
	return node_data() != other.node_data();
}

template<class T>
Iterator<T> Iterator<T>::operator++()
{
	m_node = m_node->next();
	return *this;
}

template<class T>
Iterator<T> Iterator<T>::operator++(int in)
{
	m_node = m_node->next();
	return *this;
}


template<class T>
Iterator<T> Iterator<T>::operator--()
{
	m_node = m_node->prev();
	return *this;
}

template<class T>
Iterator<T> Iterator<T>::operator--(int in)
{
	m_node = m_node->prev();
	return *this;
}


template<class T>
T Iterator<T>::node_data() const
{
	return m_node->data();
}

template<class T>
ostream &operator<<(ostream &os, const Iterator<T> &rhs)
{
	
	return os << rhs.m_node->data();
}