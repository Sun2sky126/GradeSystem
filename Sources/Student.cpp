/*
 *Student.cpp
 *The definition of the class Student
 *Created on 9/2/2020
 *By SUN Hao
 */

#include"Student.h"

//Constructor
//Default
Student::Student() {}

//Parameters included
Student::Student(char* _name_, char* _gender_, char* _ID_, 
    char* _password_, char* _institute_) {
    People(_name_, _gender_, _ID_, _password_, _institute_);
    this->credit = 0;
    this->GPA = 0.0;
}

//Destructor
Student::~Student() {
    delete [] name;
    delete [] gender;
    delete [] ID;
    delete [] password;
    delete [] institute;
}

//Set student's credit
//Input: the credit to be set
//Output: none
void Student::setCredit(int _credit_) {
    this->credit = _credit_;
}

//Add the credit
//Input: the credit to be added
//Output: none
void Student::addCredit(int addcdt) {
    this->credit += addcdt;
}

//Set student's GPA
//Input: the GPA to be set
//Output: none
void Student::setGPA(double _GPA_) {
    this->GPA = GPA;
}

//Get student's credit
//Input: none
//Output: the credit
int Student::getCredit() {
    return this->credit;
}

//Get student's GPA
//Input: none
//Output: the GPA
double Student::getGPA() {
    return this->GPA;
}

//Friend
//operator <<
ostream& operator << (ostream& output, Student& student) {
    output << "姓名:\t" << student.name << endl;
    output << "性别:\t" << student.gender << endl;
    output << "ID:\t" << student.ID << endl;
    output << "院系:\t" << student.institute << endl;
    output << "学分:\t" << student.credit << endl;
    output << "GPA:\t" << student.GPA << endl;
    return output;
}

/*
 *Completed on 9/2/2020
 *
 *------------------END OF THE FILE------------------------
 */