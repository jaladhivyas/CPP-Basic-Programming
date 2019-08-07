#include "Basic/inheritance_basic.h"
#include <string.h>
// Association:

// Association is relation between two separate classes which establishes through their Objects.
// However, all objects have their own life cycle and there is no owner.
// Association can be one-to-one, one-to-many, many-to-one, many-to-many.
// Composition and Aggregation are the two forms of association.

// Example:
// Multiple students can associate with a single Department and single student
// can associate with multiple Departments, but there is no ownership between the objects
// and both have their own lifecycle. Both can create and delete independently.


class Student;

class Department
{

public:
  Department(char *dName)
  {
      name = new char(strlen(dName));
      name = dName;
  }

  chat *getName() const
  {
      return name;
  }

  void setName(char *newName)
  {
      this->name = newName;
  }

  ~Department()
  {
      delete name;
  }

private:
  char *name;
};

class Student
{

public:
  Student(char *sName)
  {
      name = new char(strlen(sName));
      name = sName;
  }

  chat *getName() const
  {
      return name;
  }

  void setName(char *newName)
  {
      this->name = newName;
  }

  ~Student()
  {
      delete name;
  }

private:
  char *name;
};


class Course
{

public:
    Course(char *course, Student *student, Department *dept)
        :courseName(0)
        ,stdP(0)
        ,deptP(0)
     {
        if(index < 4)
        {
            courseName = new char(sizeof(strlen(courseName)));
        }
     }

    char *getStudentName() const
    {
       return stdP->getName();
    }

    char *getDepartmentName() const
    {
        return deptP->getName();
    }

    char *getCourseName() const
    {
        return courseName;
    }

    static char *findStudent(char *courseName, char *deptName)
    {
        for(int i=0;i<index;i++)
        {
            if((courseList[i]->getCourseName() == courseName) &&
                (courseList[i]->getDepartmentName() == deptName))
            {
               return(courseList[i]->getStudentName());
            }
        }
    }

private:
    Student     *stdP;
    Department  *deptP;
    char        *courseName;

    static unsigned int index;
    static Course *courseList[4];
};

