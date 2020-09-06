/*
 *Student.h
 *The declaration of the class Student
 *The class is derived from its base class "People"
 *Created on 9/2/2020
 *By SUN Hao
 */

#ifndef _STUDENT_H_
#define _STUDENT_H_

#include"People.h"

class Student : public People {

    protected:

    //The credits the student has got
    int credit;

    //The GPA of the student
    double GPA;

    public:

    //Constructor
    //Default
    Student();
    //Parameters included
    //Notation: The credit and GPA are initialized to be 0 
    Student(char* _name_, char* _gender_, char* _ID_, char* _password_, char* _institute_);

    //Destructor
    ~Student();

    //Input interfaces:

    //Set student's credit
    //Input: the credit to be set
    //Output: none
    void setCredit(int _credit_);
    //Add the credit
    //Input: the credit to be added
    //Output: none
    void addCredit(int addcdt);

    //Set student's GPA
    //Input: the GPA to be set
    //Output: none
    void setGPA(double _GPA_);

    //Output interfaces:

    //Get student's credit
    //Input: none
    //Output: the credit
    int getCredit();

    //Get student's GPA
    //Input: none
    //Output: the GPA
    double getGPA();

    //Friend
    //operator <<
    friend ostream& operator << (ostream& output, Student& student);
};

#endif //_STUDENT_H_

/*
 *Completed on 9/2/2020
 *
 *------------------END OF THE FILE------------------------
 */