/*
 *Node.h
 *The declaration of the class "Node"
 *A template class
 *Created on 9/3/2020
 *By SUN Hao
 */

#ifndef _NODE_H_
#define _NODE_H_

template<class type>
class Node {

    protected:

    //The value part of a node
    type value;

    public:

    //The pointer part of a node
    Node* pointer;

    //Constructor
    //Default
    Node();
    //Parameters included
    Node(type _value_, Node* _pointer_);

    //Destructor
    //~Node();
};

#endif //_NODE_H_

/*
 *Completed on 9/3/2020
 *
 * ------------------END OF THE FILE----------------------
 */