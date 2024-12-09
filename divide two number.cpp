#include<bits/stdc++.h>
using namespace std;
int main(){

int a,b;
double result;
cin>>a>>b;
try{
//if(b==0)throw -1;// ek bar throw hoia gele try er vitorer nicher code r kaj korbe na and without throw code can be run
result=a/(double)b;
cout<<result<<endl;

}
//cout<<"asik"<<endl;//// error dekabe karon try er just pore catch takte hobe
catch(int x){
    // jodi throw na kora hoy tahole catch activate hobe na
cout<<"2nd operator can not be zero("<<x<<")"<<endl;
}
cout<<"atik"<<endl;

return 0 ;
}
