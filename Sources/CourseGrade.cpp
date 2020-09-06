/*
 *CourseGrade.cpp
 *The definition of the class "CourseGrade"
 *Created on 9/5/2020
 *By SUN Hao
 */

#include"CourseGrade.h"

//Constructor
//Default
CourseGrade::CourseGrade() {}

//Parameters included
CourseGrade::CourseGrade(Course crs, Grade grd) {
    strcpy(name, crs.getName());
    this->property = crs.getProperty();
    this->teacher = crs.getTeacher();
    strcpy(ID, crs.getID());
    this->credit = crs.getCredit();
    this->mode = crs.getMode();
    this->score = 0;
    strcpy(grade, "-");
    this->gradepoint = 0.0;
}

CourseGrade::CourseGrade(char* _name_, int _property_, 
    Teacher _teacher_, char* _ID_, int _credit_, int _mode_)
    : Course(_name_, _property_, _teacher_, _ID_, _credit_, _mode_) {
        this->score = 0;
        strcpy(grade, "-");
        this->gradepoint = 0.0;
}

/*
 *Completed on 9/5/2020
 *
 *-------------------END OF THE FILE----------------------
 */