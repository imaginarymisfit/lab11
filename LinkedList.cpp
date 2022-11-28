// LinkedList.cpp : Defines the exported functions for the DLL application.
//

#include "LinkedList.h"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <sstream>

using namespace std;

ILinkedList::ILinkedList() : m_count(0)
{

}

/** Returns true  if list is empty, otherwise true */
bool ILinkedList::isEmpty() const
{	if (m_count == 0) 
		return true; 
	else 
		return false;
		
	//TODO - hint use m_count
	
}

Node::Node() : m_value(-1), m_next(nullptr)
{	

}
Node::Node(int val) : m_value(val), m_next(nullptr)
{	

}
Node::Node(int val, Node * nextNode) : m_value(val), m_next(nextNode)
{	

}
void Node::setItem(const int& val)
{
	m_value = val;
}
void Node::setNext(Node* nextNodePtr)
{
	m_next = nextNodePtr;
}
int Node::getItem() const
{
	return m_value;
}
Node * Node::getNext() const
{
	return m_next;
}
Node::~Node()
{
	std::cout << "Deleting node with value " << m_value << std::endl;
	delete m_next;
	// you can recursively handle this which would require some code
	// Otherwise you need to delete each node individuall in the owner of the Nodes (i.e. the LinkedList)
}

PointerBasedLinkedList::PointerBasedLinkedList() : ILinkedList(), m_head(nullptr)
{

}

/** Adds a value to the LinkedList.  Return true if able to, otherwise false */
bool PointerBasedLinkedList::add(int val)
{	
	Node* prevPtr = m_head;
	Node* curPtr = new Node();

	//curPtr = m_head;

	while (m_head != nullptr) {
		curPtr = curPtr -> getNext();
		prevPtr = curPtr;
		m_count++;

	}

		  
	return false;
	

	
}

	/*while (this->getNext()!=nullptr)
	{if this->getNext(m_value)
		m_next = m_value + val;
	} else {
	return false;
	//TODO
	}*/


/** Remove a value to the LinkedList.  Return true if able to, otherwise false.
Will only remove one entry if there are multiple entries with the same value */
bool PointerBasedLinkedList::remove(int val)
{	
	Node* curPtr = m_head;
	Node* prevPtr = new Node();

	while (curPtr != nullptr) {
		
		curPtr = curPtr -> getNext();
		prevPtr = curPtr;
		if (val) {
			return true;
		}
		}
		

		 return false;

	} 

	/*while (curPtr != nullptr) {
		
		curPtr = curPtr ->getNext();
		newNodePtr = curPtr;
		newNodePtr = newNodePtr ->setItem(val);
		
			
		}*/
	
	//TODO

	//return false;


/** Remove  all elements from LinkedList */
void PointerBasedLinkedList::clear()
{	Node * currPtr = m_head;
	Node * prevPtr = new Node();

	while (currPtr != NULL)
    {
        Node* old = currPtr;
        currPtr = currPtr ->getNext();
        delete old;
    }
	
	/*while (m_head != nullptr) {
		
		currPtr = currPtr -> getNext();
		prevPtr = currPtr;

		delete(prevPtr);*/
		
}
	 
    //TODO

PointerBasedLinkedList::~PointerBasedLinkedList()
{
	//TODO - maybe not depending on how you implement Node::~Node
	delete m_head;
}

std::string PointerBasedLinkedList::toString() const
{
	string str = "";


    //TODO
	return str;
}

ArrayBasedLinkedList::ArrayBasedLinkedList() : ILinkedList()
{
    m_count = 0;
	// you got it for free :)
}

bool ArrayBasedLinkedList::add(int val)
{
	//TODO
	return false;
}
bool ArrayBasedLinkedList::remove(int val)
{
	//TODO
	return false;
}
void ArrayBasedLinkedList::clear()
{	

	Node* curPtr = m_head;

	while (m_head != nullptr) {
		m_head = m_head -> getNext();
		
		curPtr = m_head;
		delete (curPtr);
	}

	//TODO
}
ArrayBasedLinkedList::~ArrayBasedLinkedList()
{

}

std::string ArrayBasedLinkedList::toString() const
{
	string str = "";
	/*if (this -> isEmpty()) {
		return "";
		else {*/
	for (int i =0, i < str.size(), i++){
			return str;
			}
		}
	

	//for (int i, i < string.sizeof(), i++) {}
	
	//TODO

	
