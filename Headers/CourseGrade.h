/*
 *CourseGrade.h
 *The declaration of the class "CourseGrade"
 *Derived from base classes "Course" and "Grade"
 *Created on 9/5/2020
 *By SUN Hao
 */

#ifndef _COURSEGRADE_H_
#define _COURSEGRADE_H_

#include"Course.h"
#include"Grade.h"

class CourseGrade : public Course, public Grade {

    public:

    //Constructor
    //Default
    CourseGrade();
    //Parameters included
    CourseGrade(Course crs, Grade grd);
    CourseGrade(char* _name_, int _property_, Teacher _teacher_, 
        char* _ID_, int _credit_, int _mode_);
    
};

#endif // _COURSEGRADE_H_

/*
 *Completed on 9/5/2020
 *
 *-------------------END OF THE FILE----------------------
 */