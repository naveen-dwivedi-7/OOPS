

#include<iostream>
using namespace std;
class counter {
private :
     unsigned int count;
public :
  counter(): count(0)
    {}
  unsigned get_count(){
    return count;
   }
   void operator ++(){
    ++count;

     
   }
  void increment(){
    count+=1;
  } 

   

};

    

int main(){
counter c1, c2;
cout<<c1.get_count();
cout<<endl;
cout<<c2.get_count();

++c1;
++c2;
// c2++;
cout<<c1.get_count();
cout<<endl;
cout<<c2.get_count();
c1.increment();
cout<<c1.get_count();
}