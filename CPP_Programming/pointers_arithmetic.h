#ifndef POINTERS_ARITHMETIC_H
#define POINTERS_ARITHMETIC_H
#include <iostream>

// * Pointers are derived datatype in C

// * It contains memory address as their values.Memory address is the
//   place where program instrunctions and data stores. So Pointers can be
//   used to access and manipulate data stored in memory.

// * Variable that contain pointer value is called pointer variable.

//   Declaration
//   -----------

//   data_type *ptr;

//   It tells the compiler three things

//   1. ptr is a pointer variable
//   2. ptr needs memmory location
//   3. ptr points to a variable of type data_type

//   Note:
//   ----

//   1. data_type *ptr_;
//      then ptr contains garbage value until it not assign to some variable
//      of same type.
//   2. Can't use pointer variables for division and multiplication operations.


////---------------***--------------------

//There are various applications of pointers
//1. Pass by reference.. to modify original value of variable
//   without creating copy of it
//2. To access array element : compiler internally uses pointers
//   to access array element
//3. To return multiple values
//4. For dynamic memory allocation

//*/
namespace std
{
namespace pointers
{
//int add(int x, int y)
//{
//    return x+y;
//}

//int sub(int x, int y)
//{
//    return x-y;
//}

//int operation(int x, int y, int (*functioncall)(int, int))
//{

//    return (*functioncall)(x, y);
//}

//static void accessArrayWithPointer()
//{
//   const int N = 5;
//   int a[N]    = {1,2,3,4,5};
//   int b[N][N] = {{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
//   for(int i=0;i<N;++i)
//      cout<<" "<<*(a+i)<<" ";
//   for(int i=0;i<N;++i)
//   {
//     for(int j=0;j<N;++j)
//     {
//         cout<<" "<<*(*(b+i)+j)<<" ";
//     }
//     cout<<endl;
//   }

//   for(int i=0;i<N;++i)
//   {
//     for(int j=0;j<N;++j)
//     {
//         cout<<" "<<i[b][j]<<" ";
//     }
//     cout<<endl;
//   }

//   //pointer to array and array of pointers

//   //pointer to array
//   int *ptr = a;
//   for(int i=0;i<N;i++)
//   {
//       cout<<" "<<*(ptr+i)<<endl;
//   }

//   //array of pointers
//   char *nameArray[]={"jaladhi", "vyas"};
//   for(int i=0;i<2; i++)
//       cout<<nameArray[i]<<" ";

//   //function pointers
//   int (*oper[2])(int,int);
//   oper[0] = add;
//   oper[1] = sub;
//   int x = 10;
//   int y = 10;
//   int result = oper[1](x,y);
//   cout<<result<<endl;

//   //function pointer
//   result = operation(7,5, add);

//   cout<<result<<endl;

//   // void pointer
//   // void pointer are used in function declaration.
//   // we can use void * return type which permit to return
//   // any value

//}

  static void referenceVspointers()
  {
      //Memory address
      // reference variable doesn't have memory address
      // Pointer variable have the memory address
      int i =10;
      int &r = i;  //reference
      int *p = &i; //pointer
      cout<< &i<<'\t'<<&p<<'\t'<<&r<<endl;

      //Reassignment is not possible with reference
      int var = 20;
      r  = var; //here it will change the value of i
      p  = &var;
      *p = 30; // here it will change the value var

      // NULL value
      p= NULL;
      //&r =NULL;  //not allowed reference declaration and
      // assignment should be together.
      // reference can't be null or empty;

      // arithmetic
      p++;
      cout<<'\t'<<&p<<'\t'<<endl;

      cout<<'\t'<<&r<<'\t'<<endl;
      r++;
      cout<<'\t'<<&r<<'\t'<<endl; // It will not increment address
      // (&r)++; // not allowed increment of read only location
      //cout<<'\t'<<&r<<'\t'<<endl; // It will not increment address

      // indirection
      int **ptr   = &p;
      int ***ptr2 = &ptr;

      int &r1 = r; //  it stores the address of i only
      // so the address of r1 and r are same;

  }

}
}
#endif // POINTERS_ARITHMETIC_H
