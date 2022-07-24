#include<iostream>
using namespace std;
// Runtime polymorphism - c++ does not support runtime polymorphism and upcasting too
//  java support run time polymorphism and upcasting
// data member support only  compile time polymorphism in java as well as c++
// c ++ support compile time polymorphism but can override methods 
 // runtime polymorphism can be achieved using virtual keyword in c++
 class Bike{
 public: 
     void run(){
     cout<<"running";

    }

 };
   

class Splender: public Bike {
    public:
        void run(){
          cout<<"speed of bike is 60kmph";


        }
};

int main(){
// upcasting
 Bike b= Splender();
 b.run();
 Splender s=Splender();
 
 s.run();
 return 0;
}

