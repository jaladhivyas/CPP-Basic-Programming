//#ifndef OPERATOR_OVERLOADING_BASIC_H
//#define OPERATOR_OVERLOADING_BASIC_H
//#include <iostream>

//namespace std
//{

//namespace opt
//{

// /*
//  * Customizes the C++ operators for operands of user-defined types

// */


// /* Operator functions are same as normal functions with some small difference
//    Name of operator function is always operator keyword followed by symbol of an operator
//    E.g operator +, operator - etc.

//  * Operator functions are called when corresponding operator is used

//    Note:

//  * For operator overloading atleast one of the operands must be user defined class object
//   Compiler automatically creates default assignment operator for every class

//  * One can write his own conversion operator that can be used to convert one type to another type

// */

//  class complex
//  {
//    public:
//      complex(int r=0,int i=0)
//          :rear(r)
//          ,img(i)
//      {

//      }
//      complex operator + (complex const &obj)
//      {
//          complex result;
//          result.rear = this->rear + obj.rear;
//          result.img  = this->img  + obj.img;
//          cout<<"Result---"<<result.rear<<" "<<result.img<<endl;
//          return result;

//      }

//      complex  operator +=(complex const &obj)
//      {
//         // this->rear +=  obj.rear;
//          //this->img  +=  obj.img;
//          //return *this;
//          /// or
//          complex temp = *this;
//          return (temp + obj);
//      }

//      complex operator & (complex const &obj)
//      {
//          complex result;
//          result.rear = this->rear & obj.rear;
//          result.img  = this->img  & obj.img;
//          return result;
//      }





//      void display()
//      {
//          cout<<"Rear "<<rear<<"Img "<<img<<endl;
//      }

//      int getRear() const
//      {
//          return rear;
//      }
//      int getImg() const
//      {
//          return img;
//      }

//    private:
//      int rear,img;

//  };

//  ostream& operator << (ostream &out, const complex & obj)
//  {
//      return out<<obj.getRear()<<"-------------"<<obj.getImg();
//  }

//  bool operator != (const complex& lhs, const complex& rhs)
//  {
//      return (lhs.getRear()!=rhs.getRear() && lhs.getRear()!=rhs.getRear());
//  }

//}

//}

//#endif // OPERATOR_OVERLOADING_BASIC_H
