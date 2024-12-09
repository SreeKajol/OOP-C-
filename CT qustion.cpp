#include<bits/stdc++.h>
using namespace std;
int main(){

int p=-1;
try{
    cout<<"inseide try"<<endl;
if(p<0){
    throw p;
    cout<<"after throw"<<endl;
}

   }
   catch(int p){
   cout<<"exception caught"<<endl;
   }
   cout<<"after catch"<<endl;







return 0;}
