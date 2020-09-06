/*
 *People.cpp
 *The definition of the class "People"
 *Created on 9/2/2020
 *By SUN Hao
 */

#include"People.h"

//Constructor
//Default
People::People() {}
//Parameters used
People::People(char* _name_, char* _gender_, char* _ID_, 
    char* _password_, char* _institute_) {
    strcpy(name, _name_);
    strcpy(gender, _gender_);
    strcpy(ID, _ID_);
    strcpy(password, _password_);
    strcpy(institute, _institute_);
}

//Destructor
People::~People() {
    delete [] name;
    delete [] gender;
    delete [] ID;
    delete [] password;
    delete [] institute;
}

//Get the name of the people
//Input: none
//Output: the name
char* People::getName() {
    return this->name;
}

//Get the gender of the people
//Input: none
//Output: the gender
char* People::getGender() {
    return this->gender;
} 

//Get the ID of the people
//Input: none
//Output: the id
char* People::getID() {
    return this->ID;
}

//Get the password of the people
//Input: none
//Output: the password
char* People::getPassword() {
    return this->password;
}

//Get the institute of the people
//Input: none
//Output: the institute
char* People::getInstitute() {
    return this->institute;
}

//operator <<
ostream& operator << (ostream& output, People& people) {
    output << "姓名:\t" << people.name << endl;
    output << "性别:\t" << people.gender << endl;
    output << "ID:\t" << people.ID << endl;
    output << "院系:\t" << people.institute << endl;
    return output;
}

/*
 *Completed on 9/2/2020
 *
 *----------------END OF THE FILE-------------------
 */