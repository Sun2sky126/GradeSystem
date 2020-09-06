/*
 *Grade.h
 *The declaration of the class "Grade"
 *Created on 9/2/2020
 *By SUN Hao
 */

#ifndef _GRADE_H_
#define _GRADE_H_

#include"Course.h"
#include<iomanip>

class Grade {

    protected:

    //The score of a course(full mark 100)
    int score;

    //The grade of a course
    char grade[3];

    //The gradepoint of a course(full mark 4.0)
    double gradepoint;

    public:

    //Constructor
    //Default
    Grade();

    //Destructor
    ~Grade();

    //Output interfaces:

    //Get the score
    //Input: none
    //Output: the score
    int getScore();

    //Get the grade
    //Input: none
    //Output: the grade
    char* getGrade();

    //Get the gradepoint
    //Input: none
    //Output: the grade point
    double getGradepoint();

    //Input interfaces:

    //Set the grade
    //Input: the score, the mode
    //Output: none
    void setGrade(int _score_, int mode);

    //Friend
    //Operator <<
    friend ostream& operator << (ostream& output, Grade& grd);
};

#endif //_GRADE_H_

/*
 *Completed on 9/2/2020
 *
 *-----------------END OF THE FILE-------------------
 */