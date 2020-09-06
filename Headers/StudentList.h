/*
 *StudentList.cpp
 *The declaration of class "StudentList"
 *Description:
 * The list includes every student's grade in a course
 * This serves as data bases for teachers' terminals
 * 
 *Created on 9/5/2020
 *By SUN Hao
 */

#ifndef _STUDENTLIST_H_
#define _STUDENTLIST_H_

#include"StudentGrade.h"
#include"List.h"
#include"Course.h"

template<class type>
class StudentList : public Course, public List<StudentGrade> {

    protected:

    // //The average score
    // double avrgScore;

    // //The average gradepoint
    // double avrgGradepoint;

    // //The pass student
    // double pass;

    // //The excellent student
    // double excellent;

    public:

    //Constructor
    //Default
    StudentList();
    //Parameters included
    StudentList(Course course, Node* _head_);

    //Search student's information using ID
    //Input: student's ID
    //Output: the goal student's node pointer(StudentGrade)
    // Notation: null for not being found
    StudentGrade* serachStudent(char* studentID);

    //Input student's grade
    //Input: the goal student, student's score
    //Output: none
    void setStudentGrade(StudentGrade stuGrd, int _score_);

    //Print a certain student's grade
    //Input: the goal student's ID
    //Output: none
    void printStudentGrade(char* studentID);

    //Print the whole list
    //Input: none
    //Output: none
    void printStudentGradeList();

    //Get the average
    //Input: none
    //Output: average score, average gradepoint
    double getAvrgScore();
    double getAvrgGradepoint();

    //Get the pass, excellent(and the rate)
    //Input: none
    //Output: the pass, excellent number and rate
    int getPassCount();
    int getExCount();
    double getPassRate();
    double getExRate();

    //Print the grade distribution
    //Input: none
    //Output: none
    void printDistribution();
};

#endif // _STUDENTLIST_H_

/*
 *Completed on 9/6/2020
 *
 *----------------END OF THE FILE-------------------
 */