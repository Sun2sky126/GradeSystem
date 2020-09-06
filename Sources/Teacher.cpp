/*
 *Teacher.cpp
 *The definition of the class Teacher
 *Created on 9/2/2020
 *By SUN Hao
 */

#include"Teacher.h"

//Constructor
//Default:
Teacher::Teacher() {}

//Parameters included
Teacher::Teacher(char* _name_, char* _gender_, char* _ID_, 
    char* _password_, char* _institute_) {
    People(_name_, _gender_, _ID_, _password_, _institute_);
}

//Destructor
Teacher::~Teacher() {
    delete [] name;
    delete [] gender;
    delete [] ID;
    delete [] password;
    delete [] institute;
}

//Friend:
//operator << 
ostream& operator << (ostream& output, Teacher& teacher) {
    output << "姓名:\t" << teacher.getName() << endl;
    output << "性别:\t" << teacher.getGender() << endl;
    output << "ID:\t" << teacher.getID() << endl;
    output << "院系:\t" << teacher.getInstitute() << endl;
    return output;
} 

/*
 *Completed on 9/2/2020
 *
 *---------------END OF THE FILE------------------
 */