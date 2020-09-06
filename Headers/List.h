/*
 *List.h
 *The declaration of the class "List"
 *Created on 9/3/2020
 *By SUN Hao
 */

#ifndef _LIST_H_
#define _LIST_H_

#include"Node.h"

template<class type>
class List {

    protected:

    //The pointer of the first node(head) in a list
    Node<type>* head;

    //The length of the total list
    int length;

    public:

    //Constructor
    //Default
    List();
    //Parameters included
    List(Node<type>* _head_);

    //Destructor
    //~List();

    //Output interface

    //Get the head
    //Input: none
    //Output: the head
    Node<type>* getHead();

    //Get the length
    //Input: none
    //Output: the length
    int getLength();

    //Operations on a list

    //Append a node
    //Input: the new node
    //Output: none
    void appendNode(Node<type>* apnd);

    //Search a node
    //Input: the id
    //Output: the pointer to the node
    virtual Node* searchNode(char* condition) = 0;
};

#endif //_LIST_H_

/*
 *Completed on 9/3/2020
 *
 *-----------------END OF THE FILE--------------------
 */