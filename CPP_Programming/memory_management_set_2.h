#ifndef MEMORY_MANAGEMENT_SET_2_H
#define MEMORY_MANAGEMENT_SET_2_H
#include "iostream"

namespace std
{
namespace memSet2
{

//  new and delete operator
/*
    To allocate space dynamically, use the unary operator new, followed by the type being allocated.

    new int;           // dynamically allocates an int
    new double;        // dynamically allocates a double

    to create an array dynamically, use the same form, but put brackets with a size after the type:

    new int[40];       // dynamically allocates an array of 40 ints
    new double[size];  // dynamically allocates an array of size doubles

    the new operator returns the starting address of the allocated space, and this address can be stored in a pointer:

    int * p;          // declare a pointer p
    p = new int;      // dynamically allocate an int and load address into p

    double * d;      // declare a pointer d
    d = new double;  // dynamically allocate a double and load address into d

    // similarly
    int x           = 40;
    int * list      = new int[x];
    float * numbers = new float[x+10];
*/

// delete
/*
    To deallocate memory that was created with new, we use the unary operator delete. The one operand should be a pointer that stores the address of the space to be deallocated:

    int * ptr = new int;    // dynamically created int
    // ...
    delete ptr;			    // deletes the space that ptr points to

    the pointer ptr still exists in this example.
    That's a named variable subject to scope and extent determined at compile time. It can be reused:

    ptr = new int[10];		// point p to a brand new array

To deallocate a dynamic array, use this form:

  delete [] name_of_pointer;

Example:

  int * list = new int[40];	// dynamic array

  delete [] list;		// deallocates the array
  list = 0; 			// reset list to null pointer

  After deallocating space, it's always a good idea to reset the pointer to null
  unless you are pointing it at another valid target right away.

*/

/*
 Note:
 int *x = new int[size]; // It throws exception bad_alloc if allocation fails.
 using keyword nothrow it can be avoided and it returns nullptr
 E.g.
 x = new (nothrow) int[size];
*/

// new vs malloc

// 1. new is an operator whereas malloc() is a library function.
// 2. new allocates memory and calls constructor for object initialization.
//    But malloc() allocates memory and does not call constructor.
// 3. Return type of new is exact data type while malloc() returns void*.
// 4. new is faster than malloc() because an operator is always faster than a function.


}

}

#endif // MEMORY_MANAGEMENT_SET_2_H
