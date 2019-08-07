#include "Basic/inheritance_basic.h"

// It is a specialized form of association where all object have their own
// life cycle and there is ownership like parent and child.
// Chile object can not belong to another parent object at the same time.
// One can think of it as "has-a" relationship.

class Employee
{
  public:

    Employee(char *name)
    {
      myName = new char(sizeof(strlen(name)));
      myName = name;
    }

    ~Employee()
    {
      delete myName;
    }

    char *disp()
    {
        return myName;
    }

  private:
    char *myName;
};

class Company
{
  public:

    Company(char *compName, Employee *emp)
    {
      name  = new char(sizeof(strlen(compName)));
      myEmp = emp;
    }

    ~Company()
    {
      myEmp = NULL;
    }

  private:
    char     *name;
    Employee *myEmp;
};

