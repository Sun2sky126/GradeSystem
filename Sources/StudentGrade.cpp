/*
 *StudentGrade.cpp
 *The definition of the class "StudentGrade"
 *Created on 9/5/2020
 *By SUN Hao
 */

#include"StudentGrade.h"

//Constructor
//Default
StudentGrade::StudentGrade() {}

//Parameters included
StudentGrade::StudentGrade(Student stud, Grade grd) {
    strcpy(name, stud.getName());
    strcpy(gender, stud.getGender());
    strcpy(ID, stud.getID());
    strcpy(password, stud.getPassword());
    strcpy(institute, stud.getInstitute());
    this->credit = stud.getCredit();
    this->GPA = stud.getGPA();
    this->score = grd.getScore();
    this->rank = 0;
}

StudentGrade::StudentGrade(char* _name_,
        char* _gender_,
        char* _id_,
        char* _password_,
        char* _institute_,
        int _credit_,
        double _GPA_)
    : Student(_name_, _gender_, _id_, _password_, _institute_), Grade() {
    this->credit = 0;
    this->GPA = 0.0;
    this->rank = 0;
}

//Get the rank
//Input: none
//Output: the rank
int StudentGrade::getRank() {
    return this->rank;
}

//Set the rank
//Input: the rank to be set
//Output: none
void StudentGrade::setRank(int _rank_) {
    this->rank = _rank_;
}

/*
 *Completed on 9/5/2020
 *
 *-------------------END OF THE FILE----------------------
 */