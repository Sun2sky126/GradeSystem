/*
 *Node.cpp
 *The definition of the class "Node"
 *Created on 9/3/2020
 *By SUN Hao
 */

#include"node.h"

//Constructor
//Default
template<class type>
Node<type>::Node() {}

//Parameters included
template<class type>
Node<type>::Node(type _value_, Node* _pointer_) {
    this->value = _value_;
    this->pointer = _pointer_;
}

/*
 *Completed on 9/3/2020
 *
 * ------------------END OF THE FILE----------------------
 */