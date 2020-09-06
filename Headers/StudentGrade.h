/*
 *StudentGrade.h
 *The declaration of the class "StudentGrade"
 *Derived from base classes "Student" and "Grade"
 *Created on 9/5/2020
 *By SUN Hao
 */

#ifndef _STUDENTGRADE_H_
#define _STUDENTGRADE_H_

#include"Student.h"
#include"Grade.h"

class StudentGrade : public Student, public Grade {

    protected:

    //The rank of a student in a course
    int rank;

    public:

    //Constructor
    //Default
    StudentGrade();
    //Parameters included
    StudentGrade(Student stud, Grade grd);
    StudentGrade(char* _name_,
        char* _gender_,
        char* _id_,
        char* _password_,
        char* _institute_,
        int _credit_,
        double _GPA_);

    //Output interfaces:

    //Get the rank
    //Input: none
    //Output: the rank
    int getRank();

    //Input interfaces:

    //Set the rank
    //Input: the rank to be set
    //Output: none
    void setRank(int _rank_);
};

#endif // _STUDENTGRADE_H_

/*
 *Completed on 9/5/2020
 *
 *-------------------END OF THE FILE----------------------
 */