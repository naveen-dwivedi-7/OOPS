#include<iostream>
using namespace std;


class Distance {
public :
   float dist1;
   float dist2;
/*Distance(float dist1, float dist2)
{} */


 void getdist(){
    cout<<"Enter dist1:";
    cin>>dist1;
    cout<<"Enter dist2:";
    cin>>dist2;
} 
float subdist(float dist1, float dist2){
    float dist3=0;
    if(dist1>dist2){
        dist3=dist1-dist2;
        return dist3;
    }
    else if(dist1==dist2){
       return dist3;
    }
    else{
         dist3=dist2-dist1;
         return dist3;
    }
}
};
int main(){
Distance d;
 d.getdist();
float ans;
float d1,d2;

d1=d.dist1;
d2=d.dist2;
ans=d.subdist(d1, d2);
cout<<ans;

}