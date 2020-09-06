/*
 *Course.h
 *The declaration of the class "Course"
 *Created on 9/2/2020
 *By SUN Hao
 */

#ifndef _COURSE_H_
#define _COURSE_H_

#include"Teacher.h"
#include<iostream>
using namespace std;

//Two modes of the course
#define PF_MODE 1
#define GRADE_MODE 2

//Two properties of the course
#define COMPULSORY 1
#define OPTIONAL 2

class Course {

    protected:

    //The name of the course
    char name[32];

    //The properties of the course
    int property;

    //The teacher of the course
    Teacher teacher;

    //The ID of the course
    char ID[10];

    //The credit of the course
    int credit;

    //The grade mode of the course
    int mode;

    public:

    //Constructor
    //Default
    Course();
    //Parameters included
    Course(char* _name_, int _property_, Teacher _teacher_, char* _ID_, int _credit_, int _mode_);

    //Destructor
    ~Course();

    //Output interfaces:

    //Get the name
    //Input: none
    //Output: the name
    char* getName();

    //Get the property
    //Input: none
    //Output: the property
    int getProperty();

    //Get the teacher
    //Input: none
    //Output: the teacher
    Teacher getTeacher();

    //Get the ID
    //Input: none
    //Output: the ID
    char* getID();

    //Get the credit
    //Input: none
    //Output: the credit
    int getCredit();

    //Get the mode
    //INPUT: none
    //Output: the mode
    int getMode();

    //Friend:
    //Operator <<
    friend ostream& operator << (ostream& output, Course& course);
};

#endif //_COURSE_H_

/*
 *Completed on 9/2/2020
 *
 *----------------END OF THE FILE------------------
 */