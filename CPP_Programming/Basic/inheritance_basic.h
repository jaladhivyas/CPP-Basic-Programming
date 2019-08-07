#ifndef INHERITANCE_BASIC_H
#define INHERITANCE_BASIC_H

#include <iostream>
#include <list>
namespace std
{
namespace inheritance
{

// Inheritance

// 1. It allow us to have hierachy of classes that relate to each others.
// 2. It help to avoid code duplication.
      // One can put the commmon functionality in base class and
      // specific behaviour to derive class

// Syntex.
//   class subclass_name : access_mode base_class_name
//  {
      //body of subclass
//  };

//   Note:
//   1. A derived class doesn’t inherit access to private data members.
//      However, it does inherit a full parent object, which contains any,
//      private members which that class declares.
//   2. Default access is private for class and public for struct.

//  Mode of inheritance

//  Public mode:    public-> public,    protected-> protected, private-> no direct access.
//  Protected mode: public-> protected, protected-> protected, private-> no direct access.
//  Private mode:   public-> private,   protected-> private,   private-> no direct access.

//  Types of inheritance

//  1. Single Inheritance:   In single inheritance, a class is allowed to inherit from only one class.
//  2. Multiple Inheritance:  Multiple Inheritance is a feature of C++ where a class can inherit from more than one classes.
//      E.x. class subclass_name : access_mode base_class1, access_mode base_class2, ....
//      The number of base classes will be separated by a comma (‘, ‘) and
//      access mode for every base class must be specified.
//  3. Multilevel Inheritance: In this type of inheritance, a derived class is created from another derived class.
//  4. Hierarchical Inheritance: In this type of inheritance, more than one sub class is inherited from a single base class.
//     i.e. more than one derived class is created from a single base class.
//  5. Hybrid (Virtual) Inheritance: Hybrid Inheritance is implemented by combining more than one type of inheritance. For example: Combining Hierarchical inheritance and Multiple Inheritance.
//     Below image shows the combination of hierarchical and multiple inheritance:

class Base1{};

class Derived1 : public Base1
{};


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

}

}


#endif // INHERITANCE_BASIC_H
