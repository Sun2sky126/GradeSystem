/*
 *Teacher.h
 *The declaration of the class "Teacher"
 *The class is derived from its base class "People"
 *Created on 9/2/2020
 *By SUN Hao
 */

#ifndef _TEACHER_H_
#define _TEACHER_H_

#include<People.h>

class Teacher : public People {

    public:

    //Constructor
    //Default:
    Teacher();
    //Parameters included
    Teacher(char* _name_, char* _gender_, char* _ID_, char* _password_, char* _institute_);

    //Destructor
    ~Teacher();

    //Friend:
    //operator << 
    friend ostream& operator << (ostream& output, People& people); 
};

#endif //_TEACHER_H_

/*
 *Completed on 9/2/2020
 *
 *---------------END OF THE FILE------------------
 */