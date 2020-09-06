/*
 *Grade.cpp
 *The definition of the class "Grade"
 *Created on 9/2/2002
 *By SUN Hao
 */

#include"Grade.h"

//Constructor
//Default
Grade::Grade() {
    this->score = 0;
    strcpy(grade, "-");
    this->gradepoint = 0.0;
}

//Destructor
Grade::~Grade() {
    delete [] grade;
}

//Get the score
//Input: none
//Output: the score
int Grade::getScore() {
    return this->score;
}

//Get the grade
//Input: none
//Output: the grade
char* Grade::getGrade() {
    return this->grade;
}

//Get the gradepoint
//Input: none
//Output: the grade point
double Grade::getGradepoint() {
    return this->gradepoint;
}

//Set the grade
//Input: the score, the mode
//Output: none
void Grade::setGrade(int _score_, int mode) {
    this->score = _score_;

    //Two different modes:
    switch (mode) {
        //The PF mode:
        case PF_MODE:
        if (_score_ >= 60) strcpy(grade, "P");
        else strcpy(grade, "F");
        this->gradepoint = 0.0;
        break;

        //The grade mode
        case GRADE_MODE:
        if (_score_ < 60) {
            strcpy(grade, "F");
            this->gradepoint = 0.0;
        }
        else {
            strcpy(grade, "D");
            this->gradepoint = 1.3;
        }
        if (_score_ >= 64) {
            strcpy(grade, "D+");
            this->gradepoint = 1.6;
        }
        if (_score_ >= 68) {
            strcpy(grade, "C-");
            this->gradepoint = 2.0;
        }
        if (_score_ >= 72) {
            strcpy(grade, "C");
            this->gradepoint = 2.3;
        }
        if (_score_ >= 76) {
            strcpy(grade, "C+");
            this->gradepoint = 2.6;
        }
        if (_score_ >= 80) {
            strcpy(grade, "B-");
            this->gradepoint = 3.0;
        }
        if (_score_ >= 83) {
            strcpy(grade, "B");
            this->gradepoint = 3.3;
        }
        if (_score_ >= 87) {
            strcpy(grade, "B+");
            this->gradepoint = 3.6;
        }
        if (_score_ >= 90) {
            strcpy(grade, "A-");
            this->gradepoint = 4.0;
        }
        if (_score_ >= 93) {
            strcpy(grade, "A");
            this->gradepoint = 4.0;
        }
        if (_score_ >= 97) {
            strcpy(grade, "A+");
            this->gradepoint = 4.0;
        }
    }
}

//Friend
//Operator <<
ostream& operator << (ostream& output, Grade& grd) {
    output << "成绩：\t";
    output << "(等级)" << grd.grade << " / ";
    output << "(百分制成绩)" << grd.score << " / ";
    output << "(绩点)" << setprecision(3) << grd.gradepoint << endl;
    return output;
}

/*
 *Completed on 9/2/2020
 *
 *-----------------END OF THE FILE-------------------
 */