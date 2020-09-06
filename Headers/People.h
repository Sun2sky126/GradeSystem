/*
 *People.h
 *The declaration of the class "People".
 *The class will be used as the base class of class "Student" and student "Teacher".
 *Created on 9/2/2020
 *By SUN Hao
 */

#ifndef _PEOPLE_H_
#define _PEOPLE_H_

#include<iostream>
#include<string.h>
using namespace std;

class People {

    protected:

    //The name of the person
    char name[15];

    //The gender of the person
    char gender[5];

    //The ID of the person
    char ID[10];

    //The password of the person's account
    char password[16];

    //The institute of the person
    char institute[35];

    public:

    //Constructor
    //Default
    People();
    //Parameters used
    People(char* _name_, char* _gender_, char* _ID_, char* _password_, char* _institute_);

    //Destructor
    ~People();

    //Output interfaces:

    //Get the name of the people
    //Input: none
    //Output: the name
    char* getName();

    //Get the gender of the people
    //Input: none
    //Output: the gender
    char* getGender();

    //Get the ID of the people
    //Input: none
    //Output: the id
    char* getID();

    //Get the password of the people
    //Input: none
    //Output: the password
    char* getPassword();

    //Get the institute of the people
    //Input: none
    //Output: the institute
    char* getInstitute();

    //Friend:
    //operator << 
    friend ostream& operator << (ostream& output, People& people); 
};

#endif //_PEOPLE_H_

/*
 *Completed on 9/2/2020
 *
 *----------------END OF THE FILE----------------
 */