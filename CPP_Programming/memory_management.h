#ifndef MEMORY_MANAGEMENT_H
#define MEMORY_MANAGEMENT_H
#include "iostream"

namespace std
{
namespace memory
{

// Memory management using malloc and free

// malloc:

// malloc or memory allocation is a library function.
// It is used to dynamically allocate a single large block of memory
// with the specified size.

// syntex:
// ptr = (cast_type*) malloc(byte-size)
// E.g.
// ptr = (int*) malloc(100 * sizeof(int))

// Note:
// Malloc returns Null in two cases.
//      1. there is no memory
//      2. there is no continuous memory

// calloc:
// calloc or contiguous allocation is a library function
// It is used to dynamically allocate the specified number of blocks
// of memory of the specified type.
// It initializes each block with a default value ‘0’.

// syntex:
// ptr = (cast-type*)calloc(n, element-size);
// E.g.
// ptr = (float*) calloc(25, sizeof(float));

// realloc:
// realloc or re-allocation is a library function.
// It is used to dynamically change the memory allocation of a previously allocated memory.
// If the memory previously allocated with the help of malloc or calloc is insufficient,
// then realloc can be used to dynamically re-allocate memory.
// It initializes each block with a default value ‘0’.

// syntex:
// ptr = realloc(ptr, newSize);
// E.g.
// ptr = (float*) calloc(25, sizeof(float));

// Free:

// Free method is used to dynamically de-allocate the memory.
// The memory allocated using functions malloc() and calloc() are not de-allocated on their own.
// Hence the free() method is used, whenever the dynamic memory allocation takes place.
// It helps to reduce wastage of memory by freeing it.


// Example 1. Find the suitable match.

// X: m=malloc(5); m= NULL;        1: using dangling pointers
// Y: free(n); n->value=5;         2: using uninitialized pointers
// Z: char *p; *p = ’a’;           3. lost memory is:

// Example 2. Which of the below functions cause problem with pointers

/*
  [PI] int * g (void)
  {
    int x= 10;
    return (&x);
  }

  [P2] int * g (void)
  {
    int * px;
    *px= 10;
    return px;
  }

  [P3] int *g (void)
  {
    int *px;
    px = (int *) malloc (sizeof(int));
    *px= 10;
    return px;
  }

*/

// Example 3. What's the wrong in the following code?
 /*

  void fun(int *a)
 {
    *a = (int*)malloc(sizeof(int));
 }

 int *p;
 std::memory::fun(p);
 *p = 6;
 printf("%d value of pointer is \n",*p);

*/


}

}

#endif // MEMORY_MANAGEMENT_H
