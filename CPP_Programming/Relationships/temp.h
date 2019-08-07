#include "Basic/inheritance_basic.h"


// Relationships: IS-A relationship and HAS-A relationship

//Requirements:

//1. A project manager is a employee : (Employee is a parent of manager) : Inheritance
//2. He has a card to enter company premises () : Association : (Both type of objects use each other. However each one has its own lifetime. They can exist independently.)
//3. He has many workers under him : (Aggregation) :(Single owner of the object)
//4. His salary depends on project success.  (Composition) : (Each object depends on other object)
//5. Project success depends on manager.

class SwipeCard;
class Manager
{
    public:
    list<Worker> worker;// Aggregation (Manager can have list of workers)
     Project pro;

    void login(SwipeCard obj)
    {
        obj.swipe(this);
    }
    string getManagerName()
    {
        return "Gopa";
    }

    double salary;

    void managerCharacter(bool good)
    {
        if(good)
          pro.IsSuccess = true;
        else
          pro.IsSuccess = false;
    }

};

class SwipeCard
{
   public:
    void swipe(Manager obj)
    {
        //Todo..
    }

    string swipetheCard()
    {
        return "password";
    }
};

class Worker
{
  public:
    string workers;
};

class Project
{
    Manager m;
  public:
    Project(Manager obj)
    {
        m = obj;
    }
    // Do stuff to increment the salary of manager...
    bool IsSuccess = false;

};
 Manager M;
 SwipeCard S;

