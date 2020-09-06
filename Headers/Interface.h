/*
 *Interface.h
 *The declaration of the class "Interface"
 *abstract base class
 *Created on 9/5/2020
 *By SUN Hao
 */

#ifndef _INTERFACE_H_
#define _INTERFACE_H_

class Interface {

    protected:

    //The state of current program
    int state;

    public:

    //Constructor
    //Default
    Interface();

    //Login the system
    //Input: none
    //Output: 1 for success and 0 for failure
    virtual int login() = 0;

    //Exit the system
    //Input: the instruction
    //Output: none
    virtual void quit(int instruction) = 0;
};

#endif // _INTERFACE_H_

/*
 *Completed on 9/5/2020
 *
 *-------------------END OF THE FILE----------------------
 */