#ifndef INHERITANCE_BASIC_H
#define INHERITANCE_BASIC_H

#include <iostream>
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
//  Private mode:   public-> private, protected-> private,       private-> no direct access.

//  Types of inheritance

//  1. Single Inheritance:   In single inheritance, a class is allowed to inherit from only one class.
//  2. Multiple Inheritance: Multiple Inheritance is a feature of C++ where a class can inherit from more than one classes.
//      E.x. class subclass_name : access_mode base_class1, access_mode base_class2, ....
//      Here, the number of base classes will be separated by a comma (‘, ‘) and
//      access mode for every base class must be specified.
}

}


#endif // INHERITANCE_BASIC_H
