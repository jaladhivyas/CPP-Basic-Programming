#ifndef RECURSIVE_ROUTINES_H
#define RECURSIVE_ROUTINES_H
#include <iostream>
#include<stdio.h>

// There are total four types of recursion
// 1. Direct   Recursion : Function calls the same function again
// 2. Indirect Recursion : Function calls the another function and another
//                           function calls the original function again
// 3. Tail     Recursion : If the recursive call
//                         is the last thing done by the function. There is
//                         no need to keep record of previous state.
// 4. Non-Tail Recursion : If the recursive call
//                         is  not the last thing done by the function. There is
//                         something to keep record of previous state.
namespace std
{
namespace jpv
{
// tail recursion
static void stringRecursion(char *s)
{
  if(s[0]=='\0')
  {
    return;
  }

  stringRecursion(s+1);
  stringRecursion(s+1);
  cout<<s[0]<<" ";
}
// tail Recursion;
static void intRecursion(int n)
{
  if(n > 0)
  {
     intRecursion(n-1);
     cout<<" "<<n;
     intRecursion(n-1);
  }
}
// tail recursion
static int nestedRunction(int count)
{
  cout<<count<<endl;

  if(count < 3)
  {
     nestedRunction(nestedRunction(nestedRunction(++count)));
  }

  return count;
}

// Non tail recursion
static int intPtrRecursion(int n, int *fp)
{
  int t, f;
  if( n <= 1)
  {
    *fp = 1;
    return 1;
  }

  t   = intPtrRecursion(n-1, fp);
  f   = t + *fp;
  *fp = t;
  return f;
}

} // namespace jpv

} // namespace std


#endif // RECURSIVE_ROUTINES_H
