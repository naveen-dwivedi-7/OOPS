#include<bits/stdc++.h>
using namespace std;
int main(){
 cout<<"Enter N for  Range :";
 int N;
 cin>>N;
 
 cout<<"2"<<endl;
 int p=3;
 while(p<=N){
    int count =1;
  for(int i=2;i<p;i++){
    if(p%i==0){
        count++;
    }
  }
  if(count==1){
    
    cout<<p<<endl;;
  }
 p++;
 
}

}