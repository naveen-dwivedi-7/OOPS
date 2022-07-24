#include<iostream>
using namespace std;
class Base{
int  a=20;
   public:
       int b;
     void getdata() {
        // cout<<"Enter a:";
        //  cin>>a;
        cout<<"Enter b:";
         cin>>b;
     }
   void putdata() {
        cout<<"a is :"<<a;
        cout<<" b is:"<<b;
     }

};
 class Derived: public
  Base{
   int c;
      public:
       int d;
                  
void getdata() {
        Base::getdata();
        cout<<"Enter c:";
         cin>>c;
        cout<<"Enter d:";
         cin>>d;
     }
     void putdata() {
         Base::putdata();
        cout<<"c is :"<<c;
        cout<<" d is:"<<d;
     }     


 };
 int main(){
   Base b;
   Derived d;
   d.getdata();
   d.putdata();
    
 return 0;
 }