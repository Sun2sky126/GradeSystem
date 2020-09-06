/*
 *Course.cpp
 *The definition of the class "Course"
 *Created on 9/2/2020
 *By SUN Hao
 */

#include"Course.h"

//Constructor
//Default
Course::Course() {}

//Parameters included
Course::Course(char* _name_, int _property_, Teacher _teacher_, 
    char* _ID_, int _credit_, int _mode_) {
    strcpy(name, _name_);
    this->property = _property_;
    this->teacher = _teacher_;
    strcpy(ID, _ID_);
    this->credit = _credit_;
    this->mode = mode;
}

//Destructor
Course::~Course() {
    delete [] name;
    delete [] ID;
}

//Get the name
//Input: none
//Output: the name
char* Course::getName() {
    return this->name;
}

//Get the property
//Input: none
//Output: the property
int Course::getProperty() {
    return this->property;
}

//Get the teacher
//Input: none
//Output: the teacher
Teacher Course::getTeacher() {
    return this->teacher;
}

//Get the ID
//Input: none
//Output: the ID
char* Course::getID() {
    return this->ID;
}

//Get the credit
//Input: none
//Output: the credit
int Course::getCredit() {
    return this->credit;
}

//Get the mode
//INPUT: none
//Output: the mode
int Course::getMode() {
    return this->mode;
}

//Friend:
//Operator <<
ostream& operator << (ostream& output, Course& course) {
    output << "课程名:\t" << course.name << endl;
    output << "课程属性:\t";

    //Print the property according to the integer
    switch (course.property) {
        case COMPULSORY:
        output << "必修" << endl;
        break;

        case OPTIONAL:
        output << "选修" << endl;
        break;

        default:
        output << endl;
        break;
    }

    output << "授课教师:\t" << course.teacher.getName() << endl;
    output << "课程号:\t" << course.ID << endl;
    output << "学分:\t" << course.credit << endl;
    output << "计分方式:\t";

    //Print the mode according to the integer
    switch (course.mode) {
        case PF_MODE:
        output << "P/F制" << endl;
        break;

        case GRADE_MODE:
        output << "等级制" << endl;
        break;

        default:
        output << endl;
        break;
    }

    return output;
}

/*
 *Completed on 9/2/2020
 *
 *----------------END OF THE FILE------------------
 */