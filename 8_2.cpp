

#include<iostream>
using namespace std;
class STRPLUS {
public :
   
   void   add(int a , int b){
     int c=0;
      c =a+b;
     cout<<c<<endl;
   }
   void  add(string a, string b){
      string c="";
     a+=b;
     c+=a;
     cout<<c;

   }

   

};

    

int main(){
STRPLUS obj;

obj.add(1, 2);
obj.add("aab","baa");


}