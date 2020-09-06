/*
 *List.cpp
 *The definition of the class List
 *Created on 9/3/2020
 *By SUN Hao
 */

#include"List.h"

//Constructor
//Default
template<class type>
List<type>::List() {
    this->head = NULL;
    this->length = 0;
}

//Parameters included
template<class type>
List<type>::List(Node<type>* _head_) {
    this->head = _head_;
    this->length = 1;
}

//Get the head
//Input: none
//Output: the head
template<class type>
Node<type>* List<type>::getHead() {
    return this->head;
}

//Get the length
//Input: none
//Output: the length
template<class type>
int List<type>::getLength() {
    return this->length;
}

//Append a node
//Input: the new node
//Output: 1 for success and 0 for failure
template<class type>
void List<type>::appendNode(Node<type>* apnd) {
    //Set the pointer part of apnd to null
    apnd->pointer = NULL;

    //Get the pointer to the last node
    int index;
    Node<type>* loopNode = this->head;
    for (index = 1; index < this->length; index++) //Mind this loop, maybe there are mistakes
        loopNode = loopNode->pointer;
    
    //Make the last node to point to the apnd
    loopNode->pointer = apnd;

    //Add the length
    this->length += 1;
}

/*
 *Completed on 9/3/2020
 *
 *--------------END OF THE FILE-------------------
 */