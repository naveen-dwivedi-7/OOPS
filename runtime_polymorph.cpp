#include<iostream>
using namespace std;
// Runtime polymorphism - c++ does not support runtime polymorphism and upcasting too
//  java support run time polymorphism and upcasting
// data member support only  compile time polymorphism in java as well as c++
// c ++ support compile time polymorphism but can override methods 
 // runtime polymorphism can be achieved using virtual function in c++
 class Bike{
 public: 
    virtual void run(){
     cout<<"running"<<endl;

    }
     void show(){
        cout<<" class Bike"<<endl;
     }

 };
   

class Splender: public Bike {
    public:
        void run(){
          cout<<"speed of bike is 60kmph"<<endl;
        }
         void show(){
        cout<<" class derived "<<endl;
     }

};

int main(){
// upcasting
 //Bike b =Splender();
 // b.run();
 //Splender s=Splender();
 // s.run();
  Bike *bptr;
  Splender s;
  bptr =&s;
 // virtual function, binded at runtime (Runtime polymorphism)
  bptr->run();
// Non-virtual function, binded at compile time
  bptr->show();


 return 0;
}

