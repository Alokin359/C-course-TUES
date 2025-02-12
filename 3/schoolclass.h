#ifndef SCHOOLCLASS_H
#define SCHOOLCLASS_H

#include "person.h"

typedef struct {
    Person students[26];  
    char grade;         
    int classNumber;      
    Person classTeacher;   
} SchoolClass;

#endif
