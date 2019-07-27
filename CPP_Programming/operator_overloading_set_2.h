//#ifndef OPERATOR_OVERLOADING_SET_2_H
//#define OPERATOR_OVERLOADING_SET_2_H
//#include "iostream"
//// Overloading new and delete operator
//// Why..?

//// 1. It gives developer more flexibility for heap allocation.
////    One can implement your own memory management scheme for a class
////    by overloading the operators new and delete.

//// Points.

//// 1.Two different types of overloading
////     1. Local overloading (class/ struct)
////     2. Global overloading
//// 2. Syntex for overloading operator new
////     void * operator new(size_t size)
//// 3. Syntex for overloading operator delete
////     void operator delete(void *)
//// 4. Both new and delete are static member functions
////     So they don't have access to this pointer
////     no need to write static keywoard. it calls it implicitly.
//// 5. If overload for new then also overload for delete
//// 6. Can overload for array version also. But it should be for both
//// 7. Can have multiple overloaded new and delete functions

//namespace std
//{
//namespace optSet2
//{

//class Testing
//{
//    int x;
// public:
//    Testing(int x=0)
//        :x(x)
//    {}
//    void * operator new(size_t size)
//    {
//        cout<<"New operator overloading with size"<< size<<endl;
//        void *ptr = malloc(size);
//        return ptr;
//    }

//    void operator delete(void *ptr)
//    {
//        cout<<"delete operator is overloaded"<< endl;
//        free(ptr);
//    }

//    void * operator new[](size_t size)
//    {
//        cout<<"New operator overloading with set of objects with size"<< size<<endl;
//        void *ptr = malloc(size);
//        return ptr;
//    }

//    void operator delete[](void *ptr)
//    {
//        cout<<"delete operator is overloaded with set of objects"<< endl;
//        free(ptr);
//    }
//};


////void * operator new(size_t size)
////{
////    cout<<"New operator overloading with size"<< size<<endl;
////    void *ptr = malloc(size);
////    return ptr;
////}

////void operator delete(void *ptr)
////{
////    cout<<"delete operator is overloaded"<< endl;
////    free(ptr);
////}


//}
//}

//void * operator new(size_t size)
//{
//    std::cout<<"New operator overloading with size"<< size<<std::endl;
//    void *ptr = malloc(size);
//    return ptr;
//}

//void operator delete(void *ptr)
//{
//    std::cout<<"delete operator is overloaded"<< std::endl;
//    free(ptr);
//}



//void * operator new(size_t size, int val)
//{
//    std::cout<<"New operator overloading with size and value "<< size<<std::endl;
//    void *ptr = malloc(size);
//    if(ptr!=nullptr)
//    {
//        *(int *)ptr = val;
//    }
//    return ptr;
//}

//#endif // OPERATOR_OVERLOADING_SET_2_H
